#include "memer.h"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(w_i_d_e_test){
    std::string input1 = "hello there";
    std::string expected_output1 = "H E L L O   T H E R E";
    std::string output1 = w_i_d_e(input1);
    BOOST_CHECK_EQUAL(expected_output1, output1);
}
