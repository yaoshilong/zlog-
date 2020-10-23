
#include <iostream>
#include <vector>
#include "test_zlog.h"
using namespace std;

static vector<ZlogCat*> pcats;

ZlogCat::ZlogCat(const string& catName) {

    this->name = catName;
    pcats.push_back(this);

}
void ZlogCat::init() {
    // std::cout << "init zlog cat, size: " << pcats->size() <<endl;
    for (auto& cat : pcats) {
        cat->cat = zlog_get_category(cat->name.c_str());
        dzlog_warn("init zlog category: %s", cat->name.c_str());
        cout << "init zlog category:" << cat->name.c_str() << endl;
    }
}