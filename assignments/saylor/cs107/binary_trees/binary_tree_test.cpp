#include "catch.hpp"
#include "BinaryTree.h"

TEST_CASE("Test Binary Tree Class"){
	BinaryTree *btree = new BinaryTree();

	SECTION("Test BinaryTree Constructor"){
		REQUIRE( btree != NULL);
	}

	SECTION("Insert one item and check size"){
		btree->insert("apple");
		REQUIRE(btree->size() == 1);
	}

	SECTION("Insert 5 items and check size"){
		btree->insert("apple");
		btree->insert("banana");
		btree->insert("pear");
		btree->insert("orange");
		btree->insert("kiwi");
		REQUIRE(btree->size() == 5);
	}

	SECTION("Insert 5 items and print"){
		
		btree->insert("orange");
		btree->insert("pear");
		btree->insert("apple");
		btree->insert("banana");
		btree->insert("squash");
		btree->printTreeByBreadth();
	}

	SECTION("add 3 items, and search for each"){
		btree->insert("apple");
		btree->insert("banana");
		btree->insert("pear");

		REQUIRE((btree->search("apple")->data).compare("apple") == 0);
		REQUIRE((btree->search("pear")->data).compare("pear") == 0);
		REQUIRE((btree->search("banana")->data).compare("banana") == 0);
	}

	SECTION("search for non-inserted item"){
		btree->insert("apple");
	    btree->insert("banana");
        btree->insert("pear");

		REQUIRE(btree->search("cantaloupe") == NULL);
	}

	SECTION("search an empty tree"){
		REQUIRE(btree->search("cantaloupe") == NULL);
	}
}
