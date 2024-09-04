#include <catch2/catch.hpp>

#include "smart_list.h"

TEST_CASE("comparing two smart lists") {
	auto l = smart_list_::smart_list<int>(3);
	(void) l;
	/*l.push_back(5);
	l.push_back(6);

	auto m = q1::smart_list<int>(3);
	m.push_back(5);
	m.push_back(6);

	REQUIRE(l == m);*/
}
