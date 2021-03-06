#include "wxGUI/Image.h"
#include "wxGUI/wxImageLoader.h"

Image::Image()
{
}

Image::Image(std::string path)
{
    load(path);
}

void Image::load(std::string path)
{
    ID=loadImage(path, &width, &height, &textureWidth, &textureHeight);
    
    tex_coord_x = (float)width/(float)textureWidth;
    tex_coord_y = (float)height/(float)textureHeight;
}

GLuint* Image::getID()
{
    return ID;
}

GLuint* Image::get_texture()
{
    return ID;
}

Image::~Image()
{
    glDeleteTextures (1, ID);
}
