#pragma once

namespace shapes {
    class Square {
        private:
            float side;

        public:
            void setSide(float);
            float getSide() const;
            float getArea() const;

            Square();
            Square(float side);
    };

    class Circle {
        private:
            float radius;

        public:
            void setRadius(float);
            float getRadius() const;
            float getArea() const;

            Circle();
            Circle(float radius);
    };

    class triangle {
        private:
            float base;
            float height;

        public:
            void setBase(float);
            void setHeight(float);
            float getBase() const;
            float getHeight() const;
            float getArea() const;

            triangle();
            triangle(float base, float height);
    };

}

