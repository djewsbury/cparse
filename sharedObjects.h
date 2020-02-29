
#include "shunting-yard.h"

struct CParseSharedObjects
{
    TokenMap _base_map;
    TokenMap global_map;
    packToken none;
    packToken::strFunc_t str_custom;
    Config_t conf;
    typeMap_t type_map;

    CParseSharedObjects();
    ~CParseSharedObjects();

    static CParseSharedObjects& GetInstance();
    static void DestroyInstance();
private:
    static CParseSharedObjects* s_instance;
};
