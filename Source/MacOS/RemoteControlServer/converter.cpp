#include "converter.h"

Converter* Converter::instance = NULL;

Converter* Converter::Instance()
{
    if (!instance)
    {
        instance = new Converter();
    }
    return instance;
}

Converter::Converter()
{
}

QString Converter::boolToString(bool value)
{
    return value ? "1" : "0";
}

bool Converter::stringToBool(QString &value)
{
    return (value == "1") ? true : false;
}
