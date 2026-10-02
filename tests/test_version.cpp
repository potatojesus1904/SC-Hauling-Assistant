#include <doctest/doctest.h>
#include "hauling/version.hpp"

TEST_CASE("core reports its version") {
    CHECK(hauling::version() == 1);
}