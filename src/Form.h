#pragma once

class Form
{
protected:
    unsigned int m_offset;  // убрали const

public:
    Form(unsigned int offset) : m_offset(offset) {}
    virtual void draw() const = 0;
    virtual ~Form() = default;
};

class Triangle : public Form
{
    const unsigned int m_leg_length;  // leg_length остается const

public:
    Triangle(unsigned int offset, unsigned int leg_length) 
        : Form(offset), m_leg_length(leg_length) {}
    void draw() const override;
    void setOffset(unsigned int newOffset) const;  // добавили
};

class Circle : public Form
{
    const unsigned int m_radius;  // radius остается const

public:
    Circle(unsigned int offset, unsigned int radius) 
        : Form(offset), m_radius(radius) {}
    void draw() const override;
    void setOffset(unsigned int newOffset) const;  // добавили
};












