//
// Created by decla on 2/12/2026.
//
#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/strcmp_case_insensitive.hpp"

#include <iostream>

//base tests
TEST_CASE("first < second") {
    REQUIRE(strcmp_case_insensitive("String one", "string two") == -1);
}
TEST_CASE("first = second") {
    REQUIRE(strcmp_case_insensitive("String one", "string one") == 0);
}
TEST_CASE("first > second") {
    REQUIRE(strcmp_case_insensitive("String two", "string one") == 1);
}

//poly1 - skipSpaces
//Skip spaces tests
TEST_CASE("has spaces vs none") {
    REQUIRE(strcmp_case_insensitive("my cool string", "mycoolstring", 1) == 0);
}
TEST_CASE("has spaces vs none + case difference") {
    REQUIRE(strcmp_case_insensitive("MyCoolString", "mycoolstring", 1) == 0);
}
TEST_CASE("i couldnt think of one") {
    REQUIRE(strcmp_case_insensitive("String two", "string one", 1) == 1);
}

//poly2 - maxLength
TEST_CASE("max - zero") {
    REQUIRE(strcmp_case_insensitive("String one", "string two", 0, 0) == 0);
}
TEST_CASE("max - one") {
    REQUIRE(strcmp_case_insensitive("Saturday", "sunday", 1, 1) == 0);
}
TEST_CASE("max - many") {
    REQUIRE(strcmp_case_insensitive("String two", "string one", 0, 2) == 0);
}
TEST_CASE("max - neg") {
    REQUIRE(strcmp_case_insensitive("String two", "string one", 0, -1) == 1);
}
TEST_CASE("max - oversized") {
    REQUIRE(strcmp_case_insensitive("String two", "string two", 0, 100) == 0);
}
