#pragma once

struct PackedVec2 {
    float y, x;

    PackedVec2(float x_, float y_) : y{y_}, x{x_} {}
};

struct PackedVec3 {
    float z, y, x;

    PackedVec3(float x_, float y_, float z_) : z{z_}, y{y_}, x{x_} {}
};

struct Vertex {
	PackedVec3 position;
	PackedVec2 texCoord;
	PackedVec3 normal;
};

const Vertex cubeVertices[6][6] = {
	// First face (PZ)
	{
    	// First triangle
    	{ {-0.5f, -0.5f, +0.5f}, {0.0f, 1.0f}, {0.0f, 0.0f, +1.0f} },
    	{ {+0.5f, -0.5f, +0.5f}, {1.0f, 1.0f}, {0.0f, 0.0f, +1.0f} },
    	{ {+0.5f, +0.5f, +0.5f}, {1.0f, 0.0f}, {0.0f, 0.0f, +1.0f} },
    	// Second triangle
    	{ {+0.5f, +0.5f, +0.5f}, {1.0f, 0.0f}, {0.0f, 0.0f, +1.0f} },
    	{ {-0.5f, +0.5f, +0.5f}, {0.0f, 0.0f}, {0.0f, 0.0f, +1.0f} },
    	{ {-0.5f, -0.5f, +0.5f}, {0.0f, 1.0f}, {0.0f, 0.0f, +1.0f} },
	},

	// Second face (MZ)
	{
    	// First triangle
    	{ {-0.5f, -0.5f, -0.5f}, {1.0f, 1.0f}, {0.0f, 0.0f, -1.0f} },
    	{ {-0.5f, +0.5f, -0.5f}, {1.0f, 0.0f}, {0.0f, 0.0f, -1.0f} },
    	{ {+0.5f, +0.5f, -0.5f}, {0.0f, 0.0f}, {0.0f, 0.0f, -1.0f} },
    	// Second triangle
    	{ {+0.5f, +0.5f, -0.5f}, {0.0f, 0.0f}, {0.0f, 0.0f, -1.0f} },
    	{ {+0.5f, -0.5f, -0.5f}, {0.0f, 1.0f}, {0.0f, 0.0f, -1.0f} },
    	{ {-0.5f, -0.5f, -0.5f}, {1.0f, 1.0f}, {0.0f, 0.0f, -1.0f} },
	},

	// Third face (PX)
	{
    	// First triangle
    	{ {+0.5f, -0.5f, -0.5f}, {1.0f, 1.0f}, {+1.0f, 0.0f, 0.0f} },
    	{ {+0.5f, +0.5f, -0.5f}, {1.0f, 0.0f}, {+1.0f, 0.0f, 0.0f} },
    	{ {+0.5f, +0.5f, +0.5f}, {0.0f, 0.0f}, {+1.0f, 0.0f, 0.0f} },
    	// Second triangle
    	{ {+0.5f, +0.5f, +0.5f}, {0.0f, 0.0f}, {+1.0f, 0.0f, 0.0f} },
    	{ {+0.5f, -0.5f, +0.5f}, {0.0f, 1.0f}, {+1.0f, 0.0f, 0.0f} },
    	{ {+0.5f, -0.5f, -0.5f}, {1.0f, 1.0f}, {+1.0f, 0.0f, 0.0f} },
	},

	// Fourth face (MX)
	{
    	// First triangle
    	{ {-0.5f, -0.5f, -0.5f}, {0.0f, 1.0f}, {-1.0f, 0.0f, 0.0f} },
    	{ {-0.5f, -0.5f, +0.5f}, {1.0f, 1.0f}, {-1.0f, 0.0f, 0.0f} },
    	{ {-0.5f, +0.5f, +0.5f}, {1.0f, 0.0f}, {-1.0f, 0.0f, 0.0f} },
    	// Second triangle
    	{ {-0.5f, +0.5f, +0.5f}, {1.0f, 0.0f}, {-1.0f, 0.0f, 0.0f} },
    	{ {-0.5f, +0.5f, -0.5f}, {0.0f, 0.0f}, {-1.0f, 0.0f, 0.0f} },
    	{ {-0.5f, -0.5f, -0.5f}, {0.0f, 1.0f}, {-1.0f, 0.0f, 0.0f} },
	},

	// Fifth face (PY)
	{
    	// First triangle
    	{ {-0.5f, +0.5f, -0.5f}, {0.0f, 0.0f}, {0.0f, +1.0f, 0.0f} },
    	{ {-0.5f, +0.5f, +0.5f}, {1.0f, 0.0f}, {0.0f, +1.0f, 0.0f} },
    	{ {+0.5f, +0.5f, +0.5f}, {1.0f, 1.0f}, {0.0f, +1.0f, 0.0f} },
    	// Second triangle
    	{ {+0.5f, +0.5f, +0.5f}, {1.0f, 1.0f}, {0.0f, +1.0f, 0.0f} },
    	{ {+0.5f, +0.5f, -0.5f}, {0.0f, 1.0f}, {0.0f, +1.0f, 0.0f} },
    	{ {-0.5f, +0.5f, -0.5f}, {0.0f, 0.0f}, {0.0f, +1.0f, 0.0f} },
    },

	// Sixth face (MY)
	{
    	// First triangle
    	{ {-0.5f, -0.5f, -0.5f}, {0.0f, 0.0f}, {0.0f, -1.0f, 0.0f} },
    	{ {+0.5f, -0.5f, -0.5f}, {1.0f, 0.0f}, {0.0f, -1.0f, 0.0f} },
    	{ {+0.5f, -0.5f, +0.5f}, {1.0f, 1.0f}, {0.0f, -1.0f, 0.0f} },
    	// Second triangle
    	{ {+0.5f, -0.5f, +0.5f}, {1.0f, 1.0f}, {0.0f, -1.0f, 0.0f} },
    	{ {-0.5f, -0.5f, +0.5f}, {0.0f, 1.0f}, {0.0f, -1.0f, 0.0f} },
    	{ {-0.5f, -0.5f, -0.5f}, {0.0f, 0.0f}, {0.0f, -1.0f, 0.0f} },
	},
};
