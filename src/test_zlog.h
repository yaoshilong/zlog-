#pragma once
#include <string>
#include "zlog.h"

using namespace std;

class ZlogCat {
private:
    zlog_category_t* cat;
    string name;

public:
    explicit ZlogCat(const string& catName);
    inline operator zlog_category_t* () { return cat; }

    static void init();
};

