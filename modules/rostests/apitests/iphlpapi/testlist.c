#define __ROS_LONG64__

#define STANDALONE
#include <apitest.h>

extern void func_GetExtendedTcpTable(void);
extern void func_GetInterfaceName(void);
extern void func_GetNetworkParams(void);
extern void func_GetOwnerModuleFromTcpEntry(void);
extern void func_icmp(void);
extern void func_SendARP(void);

const struct test winetest_testlist[] =
{
    { "GetExtendedTcpTable",        func_GetExtendedTcpTable },
    { "GetInterfaceName",           func_GetInterfaceName },
    { "GetNetworkParams",           func_GetNetworkParams },
    { "GetOwnerModuleFromTcpEntry", func_GetOwnerModuleFromTcpEntry },
    { "icmp",                       func_icmp },
    { "SendARP",                    func_SendARP },

    { 0, 0 }
};

