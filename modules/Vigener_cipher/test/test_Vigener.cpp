// Copyright 2021 Bezrodnov Dmitry

#include <gtest/gtest.h>

#include"include/Vigener.h"

TEST(VigenerTest, correct_test){
    Vigener_cipher chip("dmitry");
    std::string message = "hello world";
    std::string result_enc = chip.encrypt(message); 
    std::string result_dec = chip.decrypt(result_enc);
    ASSERT_EQ(message, result_dec);
}