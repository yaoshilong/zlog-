#include"test_zlog.h"
#include"people.h"
static ZlogCat cat("people");
void people::add(int a)
{
	zlog_info(cat, "[%d]info", a);
	zlog_debug(cat, "[%d]debug", a);
	zlog_debug(cat, "[%d]debug", a);
	zlog_error(cat, "[%d]error", a);
	zlog_warn(cat, "[%d]warn", a);
	zlog_notice(cat, "[%d]notice", a);
	zlog_fatal(cat, "[%d]fatal", a);
}
