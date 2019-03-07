#pragma once
class Unit
{
private:
	double base_health;
	double base_strength;
	double base_cost;

public:
	Unit();
	virtual void attack();
	virtual void defend();
	virtual void standInFormation();
	virtual ~Unit();
};

