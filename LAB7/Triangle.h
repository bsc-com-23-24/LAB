#pragma once

namespace shapes {
class Triangle {
    private:
        float base;
        float height;

    public:
        void setBase(float);
        void setHeight(float);
        float getBase() const;
        float getHeight() const;
        float getArea() const;

        Triangle();
        Triangle(float base, float height);
    };

}