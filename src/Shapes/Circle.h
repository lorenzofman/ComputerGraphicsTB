#pragma once

#include <ostream>
#include <fstream>

#include "../Primitives/Float2.h"
#include "Shape.h"
#include "../Primitives/Rect.h"
#include "../Canvas2D/Canvas2D.h"
#include "../Primitives/Constants.h"
#include "../Serialization/Serial.h"

class Circle : public Shape
{
	public:

	Circle(float radius, RGBAFloat filledColor, RGBAFloat outlineColor = RGBAFloat(0, 0, 0), float outlineThickness = 0);

	Circle(std::ifstream& stream);

	virtual void Serialize(std::ofstream&) override;
	virtual byte GetShapeIdentifier() override;
	// Inherited via Shape
	virtual void Rotate(float rad) override;
	virtual void Scale(float scale) override;
	virtual void Scale(float x, float y) override;

	virtual bool IsPointInside(Float2) override;
	virtual Rect GetRect() override;
	virtual void MatchRect(Rect) override;

	protected:

	// Inherited via Shape
	virtual void Draw() override;

	private:

	float radius;
	float rotation;
};
