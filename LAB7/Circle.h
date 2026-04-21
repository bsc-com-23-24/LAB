#pragma once

namespace shapes {

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
}