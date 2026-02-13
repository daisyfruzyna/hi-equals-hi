//
// Created by decla on 2/12/2026.
//
#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/strcmp_case_insensitive.hpp"

#include <iostream>

TEST_CASE("first < second") {
    REQUIRE(strcmp_case_insensitive("String one", "string two") == -1);
}
TEST_CASE("first = second") {
    REQUIRE(strcmp_case_insensitive("String one", "string one") == 0);
}
TEST_CASE("first > second") {
    REQUIRE(strcmp_case_insensitive("String two", "string one") == 1);
}