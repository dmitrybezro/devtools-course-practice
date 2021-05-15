// Copyright 2021 Bezrodnov Dmitry

#include "include/hanoi_application.h"

#include <string>

int main(int argc, const char** argv) {
    HanoiApplication app;
    std::string output = app(argc, argv);
    printf("%s\n", output.c_str());
    return 0;
}
