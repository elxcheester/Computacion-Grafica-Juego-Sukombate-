#ifndef PUBLICO_H
#define PUBLICO_H
#include <assimp/cimport.h> // C importer
#include <assimp/scene.h> // collects data
#include <assimp/postprocess.h> // various extra operations
#include <GL/glew.h> // include GLEW and new version of GL on Windows
#include <GLFW/glfw3.h> // GLFW helper library
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
#include <string>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <iostream>
#include "gl_utils.h"
#include "tools.h"
#include "malla.h"
#include "GLDebugDrawer.hpp"
#include "esfera.h"
#include <bullet/btBulletDynamicsCommon.h>

#define GL_LOG_FILE "log/gl.log"
#define VERTEX_SHADER_FILE "shaders/test_vs.glsl"
#define FRAGMENT_SHADER_FILE "shaders/test_fs.glsl"

using namespace std;

class Publico
{
	private:
		float rad;
		float altura;
		float x;
		float z;
		float mass;


	public:
		 btRigidBody* body;
		 float y;
		 
		 Publico(float,float,float,float,float,float);

		 void CrearPublico(btDiscreteDynamicsWorld* dynamicsWorld);

		 void Dibujar(malla *conito,GLuint shader_programme, int model_mat_location);

};

#endif