#include "stdafx.h"
#include "Component.h"

double Component::get_voltage() const
{
    return 0.0;
}

void Component::simulate()
{
}

std::string Component::get_name() const
{
    return std::string();
}

double Resistor::get_current() const
{
    return 0.0;
}

