package tree_sitter_hexpat_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_hexpat "github.com/tree-sitter/tree-sitter-hexpat/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_hexpat.Language())
	if language == nil {
		t.Errorf("Error loading HexPat grammar")
	}
}
