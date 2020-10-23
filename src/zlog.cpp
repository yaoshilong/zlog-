 

#include <iostream>
#include "test_zlog.h"
#include "people.h"
using namespace std;
static ZlogCat cat("my_cat");
int main()
{

    if (dzlog_init("./test_hello.conf", "filesync") != 0) {
        cerr << "failed to init zlog, config: " << endl;
    }

    cout << "11111" << endl;
    ZlogCat::init();
    cout << "2222" << endl;
    int num = 88;
    zlog_info(cat, "[%d]thread start", num);
    people pe;
    pe.add(88);
    getchar();
    return 0;
}
