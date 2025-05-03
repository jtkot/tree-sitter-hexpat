import sys
import re
import subprocess

test_source = sys.argv[1]
test_content = open(test_source, "r").read()
sections = re.split("^={4,}$", test_content, flags=re.MULTILINE)
sections = [x.strip() for x in sections]
tests = zip(sections[1::2], sections[2::2])
out = ""


def write(s):
    global out
    out += s + "\n"


for test in tests:
    title = test[0]
    title_len = len(title)
    write("=" * title_len)
    write(title)
    write("=" * title_len)
    test_body = test[1].split("---")[0].strip()
    write(test_body)
    write("---")
    tree = subprocess.run(
        ["tree-sitter", "parse", "/dev/stdin"],
        input=test_body,
        text=True,
        capture_output=True,
    ).stdout
    tree = re.sub(" \\[.*-.*\\]", "", tree.replace("  ", "\t"))
    write(tree)

open(test_source, "w").write(out)
