#include "memer.h"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(superscript_test){
    std::string input1 = "hello there";
    std::string expected_output1 =  "ʰᵉˡˡᵒ ᵗʰᵉʳᵉ";
    std::string output1 = superscript(input1);
    BOOST_CHECK_EQUAL(expected_output1, output1);




}
