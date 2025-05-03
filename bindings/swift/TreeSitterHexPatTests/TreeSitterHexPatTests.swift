import XCTest
import SwiftTreeSitter
import TreeSitterHexpat

final class TreeSitterHexpatTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_hexpat())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading HexPat grammar")
    }
}
