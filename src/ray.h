#ifndef RAYH
#define RAYH

#include "vec3.h"

class ray {
  public:
    ray() {}
    ray(const vec3& origin, const vec3& direction) { A = origin; B = direction; }
    vec3 origin() const { return A; }
    vec3 direction() const { return B; }
    vec3 at(float t) const { return A + t*B; }

  public:
    vec3 A;
    vec3 B;
};

#endif
