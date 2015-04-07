#define GLI_INCLUDE_GL_IBM_VERTEX_ARRAY_LISTS

enum Main {

//  GL_VERTEX_ARRAY_LIST_IBM                       = 103070,
//  GL_NORMAL_ARRAY_LIST_IBM                       = 103071,
//  GL_COLOR_ARRAY_LIST_IBM                        = 103072,
//  GL_INDEX_ARRAY_LIST_IBM                        = 103073,
//  GL_TEXTURE_COORD_ARRAY_LIST_IBM                = 103074,
//  GL_EDGE_FLAG_ARRAY_LIST_IBM                    = 103075,
//  GL_FOG_COORDINATE_ARRAY_LIST_IBM               = 103076,
//  GL_SECONDARY_COLOR_ARRAY_LIST_IBM              = 103077,
//  GL_VERTEX_ARRAY_LIST_STRIDE_IBM                = 103080,
//  GL_NORMAL_ARRAY_LIST_STRIDE_IBM                = 103081,
//  GL_COLOR_ARRAY_LIST_STRIDE_IBM                 = 103082,
//  GL_INDEX_ARRAY_LIST_STRIDE_IBM                 = 103083,
//  GL_TEXTURE_COORD_ARRAY_LIST_STRIDE_IBM         = 103084,
//  GL_EDGE_FLAG_ARRAY_LIST_STRIDE_IBM             = 103085,
//  GL_FOG_COORDINATE_ARRAY_LIST_STRIDE_IBM        = 103086,
//  GL_SECONDARY_COLOR_ARRAY_LIST_STRIDE_IBM       = 103087,

};

void glColorPointerListIBM(GLint size, GLenum[Main] type, GLint stride, const GLvoid* * pointer, GLint ptrstride);
void glSecondaryColorPointerListIBM(GLint size, GLenum[Main] type, GLint stride, const GLvoid* * pointer, GLint ptrstride);
void glEdgeFlagPointerListIBM(GLint stride, const GLboolean* * pointer, GLint ptrstride);
void glFogCoordPointerListIBM(GLenum[Main] type, GLint stride, const GLvoid* * pointer, GLint ptrstride);
void glIndexPointerListIBM(GLenum[Main] type, GLint stride, const GLvoid* * pointer, GLint ptrstride);
void glNormalPointerListIBM(GLenum[Main] type, GLint stride, const GLvoid* * pointer, GLint ptrstride);
void glTexCoordPointerListIBM(GLint size, GLenum[Main] type, GLint stride, const GLvoid* * pointer, GLint ptrstride);
void glVertexPointerListIBM(GLint size, GLenum[Main] type, GLint stride, const GLvoid* * pointer, GLint ptrstride);
