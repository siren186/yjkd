#include "stdafx.h"
#include "singleton.hpp"
#include "factory_method.hpp"
#include "facade.hpp"
#include "template_method.hpp"

TEST(DESIGN_PATTERNS, SINGLETON)
{
    CLazyMan::Instance().DoSomething();
    y::Singleton<CHungryMan>::instance().DoSomething();
}

TEST(DESIGN_PATTERNS, FACTORY_METHOD)
{
    FactoryMethodClient::main();
}

TEST(DESIGN_PATTERNS, FACADE)
{
    CFacadeClient::main();
}

TEST(DESIGN_PATTERNS, TEMPLATE_METHOD)
{
    TemplateMethodClient::main();
}
