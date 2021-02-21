#include "memer.h"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(upper_lower_test){
    std::string input1 = "hello there";
    std::string expected_output1 = "HeLlO ThErE";
    std::string output1 = upper_lower(input1);
    BOOST_CHECK_EQUAL(expected_output1, output1);
    
    std::string input2 = "Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.";
    std::string expected_output2 = "LoReM IpSuM Is SiMpLy DuMmY TeXt Of ThE PrInTiNg AnD TyPeSeTtInG InDuStRy. LoReM IpSuM HaS BeEn ThE InDuStRy'S StAnDaRd DuMmY TeXt EvEr SiNcE ThE 1500S, WhEn An UnKnOwN PrInTeR ToOk A GaLlEy Of TyPe AnD ScRaMbLeD It To MaKe A TyPe SpEcImEn BoOk. It HaS SuRvIvEd NoT OnLy FiVe CeNtUrIeS, BuT AlSo ThE LeAp InTo ElEcTrOnIc TyPeSeTtInG, ReMaInInG EsSeNtIaLlY UnChAnGeD. It WaS PoPuLaRiSeD In ThE 1960S WiTh ThE ReLeAsE Of LeTrAsEt ShEeTs CoNtAiNiNg LoReM IpSuM PaSsAgEs, AnD MoRe ReCeNtLy WiTh DeSkToP PuBlIsHiNg SoFtWaRe LiKe AlDuS PaGeMaKeR InClUdInG VeRsIoNs Of LoReM IpSuM.";
    std::string output2 = upper_lower(input2);
    BOOST_CHECK_EQUAL(expected_output2, output2);

    std::string input3 = "0123456789;'#[],./{}:@~<>?-=_+!£$%^&*()";
    std::string output3 = upper_lower(input3);
    BOOST_CHECK_EQUAL(input3,output3);


    std::string input4 = "check for failure";
    std::string expected_output4 = "ChEcK FoR FaIlUrE";
    std::string output4 = upper_lower(input4);
    BOOST_TEST(output4 == expected_output4);
    BOOST_TEST(output4 != input4);
}
