// Copyright 2021 Bezrodnov Dmitry

#ifndef MODULES_VIGENER_CIPHER_INCLUDE_VIGENER_H_
#define MODULES_VIGENER_CIPHER_INCLUDE_VIGENER_H_


#include<string>

class Vigener_cipher {
 private:
    std::string key;
    int length_abc = 26;
 public:
    Vigener_cipher() {
    key = "";
    }
    Vigener_cipher(const std::string& _key) {
        key = _key;
    }
    void set_key(const std::string& _key);
    std::string get_key();
    std::string encrypt(const std::string& str_input);
    std::string decrypt(const std::string& str_input);
 private:
    std::string correct(const std::string& str_input);
    std::string get_key_string(const std::string& _message,
        const std::string& _key);
};

#endif  //  MODULES_VIGENER_CIPHER_INCLUDE_VIGENER_H_