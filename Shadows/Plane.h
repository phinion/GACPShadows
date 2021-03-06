#ifndef _PLANE_H_
#define _PLANE_H_

#include <glad/glad.h> 

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include "stb_image.h"

#include "TransformComponent.h"

#include <iostream>
#include <vector>

class Plane : public Transform{
public:
	unsigned int VAO;
	
	Plane();
	void loadTexture(char const * path);
	void bindTextures(unsigned int _shadowCubemap);
	void draw();
private:
	unsigned int VBO;
	std::vector<unsigned int> textures;	
};
#endif