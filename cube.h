/* OBJ2H program, copyright Jeff Chastine */
/* Original file: cube.obj */
/* Version 1.0*/


#ifndef CUBE_H
#define CUBE_H

const int num_indices = 74;
const int num_vertices = 16;


GLfloat vertices[] = {
//rink
	 0.00f,  0.00f, -2.0f,  //0      
	 2.00f,  0.00f, -2.0f,  //1       
	 0.00f,  0.25f, -2.0f,  //2     Top Left	0,1
	 2.00f,  0.25f, -2.0f,  //3     Top Right	1,1
	 0.00f,  0.00f,  2.0f,  //4     
	 2.00f,  0.00f,  2.0f,  //5       
	 0.00f,  0.25f,  2.0f,  //6     Bot Left	0,0
	 2.00f,  0.25f,  2.0f,  //7     Bot Right	1,0

//puck
	 1.00f,  0.25f,  0.0f,         
	 1.10f, 0.25f, 0.0f,         
	 1.00f,  0.27f,  0.0f,         
	 1.10f, 0.27f, 0.0f,         
	 1.00f,  0.25f,  0.1f,         
	 1.10f, 0.25f, 0.1f,         
	 1.00f,  0.27f,  0.1f,         
	 1.10f, 0.27,  0.1f,         

//goal
	 0.75f,  0.25f,  -1.80f,
	 1.25f,  0.25f,  -1.80f,
	 0.75f,  0.50f,  -1.80f,//2
	 1.25f,  0.50f,  -1.80f,//3
	 0.75f,  0.25f,  -1.7f,//4
	 1.25f,  0.25f,  -1.7f,//5
	 0.75f,  0.50f,  -1.7f,//6
	 1.25f,  0.50f,  -1.7f,//7
};

GLfloat colors[] = {
//rink	
	1.0f, 1.0f, 1.0f, 
	1.0f, 1.0f, 1.0f, 
	1.0f, 1.0f, 1.0f,
	1.0f, 1.0f, 1.0f,
	1.0f, 1.0f, 1.0f,
	1.0f, 1.0f, 1.0f,
	1.0f, 1.0f, 1.0f,
	1.0f, 1.0f, 1.0f,

//puck
	0.0f, 0.0f, 0.0f,  
	0.0f, 0.0f, 0.0f,  
	0.0f, 0.0f, 0.0f, 
	0.0f, 0.0f, 0.0f, 
	0.0f, 0.0f, 0.0f, 
	0.0f, 0.0f, 0.0f, 
	0.0f, 0.0f, 0.0f, 
	0.0f, 0.0f, 0.0f, 

//goal
	0.0f, 0.0f, 1.0f,  
	0.0f, 0.0f, 1.0f,  
	0.0f, 0.0f, 1.0f, 
	0.0f, 0.0f, 1.0f, 
	0.0f, 0.0f, 1.0f, 
	0.0f, 0.0f, 1.0f, 
	0.0f, 0.0f, 1.0f, 
	0.0f, 0.0f, 1.0f


};

GLuint indices[] = {
//rink
	0,	6,	4,
	0,	2,	6,
	0,	3,	2,
	0,	1,	3,
	2,	7,	6,
	2,	3,	7,
	4,	6,	7,
	4,	7,	5,
	0,	4,	5,
	0,	5,	1,
	1,	5,	7,
	1,	7, 	3,

//puck
	8,	14,	12,
	8,	10,	14,
	8,	11,	10,
	8,	9,	11,
	10,	15,	14,
	10,	11,	15,
	12,	14,	15,
	12,	15,	13,
	8,	12,	13,
	8,	13,	9,
	9,	13,	15,
	9,	15, 	11,

//goal
	16,	22,	20,
	16,	18,	22,
	16,	19,	18,
	16,	17,	19,
	18,	23,	22,
	18,	19,	23,
	//20,	22,	23,
	//20,	23,	21,
	//16,	20,	21,
	//16,	21,	17,
	17,	21,	23,
	17,	23,	19

};

GLfloat textures[] = {
	//rink
	
	0.0,0.0,//0
	0.0,0.0,//1
	0.0,1.0,//2
	1.0,1.0,//3
	0.0,0.0,//4
	0.0,0.0,//5
	0.0,0.0,//6
	1.0,0.0,//7
	//puck
	0.0,0.0,
	0.0,0.0,
	0.0,0.0,
	0.0,0.0,
	0.0,0.0,
	0.0,0.0,
	0.0,0.0,
	0.0,0.0,
	//goal
	0.0,0.0,
	0.0,0.0,
	0.0,0.0,
	0.0,0.0,
	0.0,0.0,
	0.0,0.0,
	0.0,0.0,
	0.0,0.0
};





#endif //cube_H
