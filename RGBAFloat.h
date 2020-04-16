#pragma once
#pragma pack (push, 1)
struct RGBAFloat
{
	float r;
	float g;
	float b;
	float a;
	RGBAFloat();
	RGBAFloat(float r, float g, float b, float a = 1);
	static RGBAFloat Blank;
};
#pragma pack (pop)