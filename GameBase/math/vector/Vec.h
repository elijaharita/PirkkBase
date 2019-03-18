#pragma once

#include <iostream>

namespace PirkkBase {
	namespace Math {
		template<typename T, size_t L>
		struct Vec {
			T data[L];

			Vec() { for (size_t i = 0; i < L; i++) data[i] = 0; }
			T &operator[](size_t i) { return data[i]; }
			T operator[](size_t i) const { return data[i]; }
		};

		// Enable printing with std::cout
		template<typename T, size_t L>
		std::ostream &operator<<(std::ostream &out, const Vec<T, L> &vec) {
			out << "[";
			for (size_t i = 0; i < L; i++) {
				out << vec[i];
				if (i < L - 1) out << ", ";
			}
			out << "]";
			return out;
		}
	}
}

#include "Vec2.h"
#include "Vec3.h"
#include "Vec4.h"
#include "VecOp.h"
#include "VecTypes.h"