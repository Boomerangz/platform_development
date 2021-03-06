// Generated Code - DO NOT EDIT !!
// generated by 'emugen'


#include <string.h>
#include "gl_client_context.h"


#include <stdio.h>

int gl_client_context_t::initDispatchByName(void *(*getProc)(const char *, void *userData), void *userData)
{
	void *ptr;

	ptr = getProc("glAlphaFunc", userData); set_glAlphaFunc((glAlphaFunc_client_proc_t)ptr);
	ptr = getProc("glClearColor", userData); set_glClearColor((glClearColor_client_proc_t)ptr);
	ptr = getProc("glClearDepthf", userData); set_glClearDepthf((glClearDepthf_client_proc_t)ptr);
	ptr = getProc("glClipPlanef", userData); set_glClipPlanef((glClipPlanef_client_proc_t)ptr);
	ptr = getProc("glColor4f", userData); set_glColor4f((glColor4f_client_proc_t)ptr);
	ptr = getProc("glDepthRangef", userData); set_glDepthRangef((glDepthRangef_client_proc_t)ptr);
	ptr = getProc("glFogf", userData); set_glFogf((glFogf_client_proc_t)ptr);
	ptr = getProc("glFogfv", userData); set_glFogfv((glFogfv_client_proc_t)ptr);
	ptr = getProc("glFrustumf", userData); set_glFrustumf((glFrustumf_client_proc_t)ptr);
	ptr = getProc("glGetClipPlanef", userData); set_glGetClipPlanef((glGetClipPlanef_client_proc_t)ptr);
	ptr = getProc("glGetFloatv", userData); set_glGetFloatv((glGetFloatv_client_proc_t)ptr);
	ptr = getProc("glGetLightfv", userData); set_glGetLightfv((glGetLightfv_client_proc_t)ptr);
	ptr = getProc("glGetMaterialfv", userData); set_glGetMaterialfv((glGetMaterialfv_client_proc_t)ptr);
	ptr = getProc("glGetTexEnvfv", userData); set_glGetTexEnvfv((glGetTexEnvfv_client_proc_t)ptr);
	ptr = getProc("glGetTexParameterfv", userData); set_glGetTexParameterfv((glGetTexParameterfv_client_proc_t)ptr);
	ptr = getProc("glLightModelf", userData); set_glLightModelf((glLightModelf_client_proc_t)ptr);
	ptr = getProc("glLightModelfv", userData); set_glLightModelfv((glLightModelfv_client_proc_t)ptr);
	ptr = getProc("glLightf", userData); set_glLightf((glLightf_client_proc_t)ptr);
	ptr = getProc("glLightfv", userData); set_glLightfv((glLightfv_client_proc_t)ptr);
	ptr = getProc("glLineWidth", userData); set_glLineWidth((glLineWidth_client_proc_t)ptr);
	ptr = getProc("glLoadMatrixf", userData); set_glLoadMatrixf((glLoadMatrixf_client_proc_t)ptr);
	ptr = getProc("glMaterialf", userData); set_glMaterialf((glMaterialf_client_proc_t)ptr);
	ptr = getProc("glMaterialfv", userData); set_glMaterialfv((glMaterialfv_client_proc_t)ptr);
	ptr = getProc("glMultMatrixf", userData); set_glMultMatrixf((glMultMatrixf_client_proc_t)ptr);
	ptr = getProc("glMultiTexCoord4f", userData); set_glMultiTexCoord4f((glMultiTexCoord4f_client_proc_t)ptr);
	ptr = getProc("glNormal3f", userData); set_glNormal3f((glNormal3f_client_proc_t)ptr);
	ptr = getProc("glOrthof", userData); set_glOrthof((glOrthof_client_proc_t)ptr);
	ptr = getProc("glPointParameterf", userData); set_glPointParameterf((glPointParameterf_client_proc_t)ptr);
	ptr = getProc("glPointParameterfv", userData); set_glPointParameterfv((glPointParameterfv_client_proc_t)ptr);
	ptr = getProc("glPointSize", userData); set_glPointSize((glPointSize_client_proc_t)ptr);
	ptr = getProc("glPolygonOffset", userData); set_glPolygonOffset((glPolygonOffset_client_proc_t)ptr);
	ptr = getProc("glRotatef", userData); set_glRotatef((glRotatef_client_proc_t)ptr);
	ptr = getProc("glScalef", userData); set_glScalef((glScalef_client_proc_t)ptr);
	ptr = getProc("glTexEnvf", userData); set_glTexEnvf((glTexEnvf_client_proc_t)ptr);
	ptr = getProc("glTexEnvfv", userData); set_glTexEnvfv((glTexEnvfv_client_proc_t)ptr);
	ptr = getProc("glTexParameterf", userData); set_glTexParameterf((glTexParameterf_client_proc_t)ptr);
	ptr = getProc("glTexParameterfv", userData); set_glTexParameterfv((glTexParameterfv_client_proc_t)ptr);
	ptr = getProc("glTranslatef", userData); set_glTranslatef((glTranslatef_client_proc_t)ptr);
	ptr = getProc("glActiveTexture", userData); set_glActiveTexture((glActiveTexture_client_proc_t)ptr);
	ptr = getProc("glAlphaFuncx", userData); set_glAlphaFuncx((glAlphaFuncx_client_proc_t)ptr);
	ptr = getProc("glBindBuffer", userData); set_glBindBuffer((glBindBuffer_client_proc_t)ptr);
	ptr = getProc("glBindTexture", userData); set_glBindTexture((glBindTexture_client_proc_t)ptr);
	ptr = getProc("glBlendFunc", userData); set_glBlendFunc((glBlendFunc_client_proc_t)ptr);
	ptr = getProc("glBufferData", userData); set_glBufferData((glBufferData_client_proc_t)ptr);
	ptr = getProc("glBufferSubData", userData); set_glBufferSubData((glBufferSubData_client_proc_t)ptr);
	ptr = getProc("glClear", userData); set_glClear((glClear_client_proc_t)ptr);
	ptr = getProc("glClearColorx", userData); set_glClearColorx((glClearColorx_client_proc_t)ptr);
	ptr = getProc("glClearDepthx", userData); set_glClearDepthx((glClearDepthx_client_proc_t)ptr);
	ptr = getProc("glClearStencil", userData); set_glClearStencil((glClearStencil_client_proc_t)ptr);
	ptr = getProc("glClientActiveTexture", userData); set_glClientActiveTexture((glClientActiveTexture_client_proc_t)ptr);
	ptr = getProc("glColor4ub", userData); set_glColor4ub((glColor4ub_client_proc_t)ptr);
	ptr = getProc("glColor4x", userData); set_glColor4x((glColor4x_client_proc_t)ptr);
	ptr = getProc("glColorMask", userData); set_glColorMask((glColorMask_client_proc_t)ptr);
	ptr = getProc("glColorPointer", userData); set_glColorPointer((glColorPointer_client_proc_t)ptr);
	ptr = getProc("glCompressedTexImage2D", userData); set_glCompressedTexImage2D((glCompressedTexImage2D_client_proc_t)ptr);
	ptr = getProc("glCompressedTexSubImage2D", userData); set_glCompressedTexSubImage2D((glCompressedTexSubImage2D_client_proc_t)ptr);
	ptr = getProc("glCopyTexImage2D", userData); set_glCopyTexImage2D((glCopyTexImage2D_client_proc_t)ptr);
	ptr = getProc("glCopyTexSubImage2D", userData); set_glCopyTexSubImage2D((glCopyTexSubImage2D_client_proc_t)ptr);
	ptr = getProc("glCullFace", userData); set_glCullFace((glCullFace_client_proc_t)ptr);
	ptr = getProc("glDeleteBuffers", userData); set_glDeleteBuffers((glDeleteBuffers_client_proc_t)ptr);
	ptr = getProc("glDeleteTextures", userData); set_glDeleteTextures((glDeleteTextures_client_proc_t)ptr);
	ptr = getProc("glDepthFunc", userData); set_glDepthFunc((glDepthFunc_client_proc_t)ptr);
	ptr = getProc("glDepthMask", userData); set_glDepthMask((glDepthMask_client_proc_t)ptr);
	ptr = getProc("glDepthRangex", userData); set_glDepthRangex((glDepthRangex_client_proc_t)ptr);
	ptr = getProc("glDisable", userData); set_glDisable((glDisable_client_proc_t)ptr);
	ptr = getProc("glDisableClientState", userData); set_glDisableClientState((glDisableClientState_client_proc_t)ptr);
	ptr = getProc("glDrawArrays", userData); set_glDrawArrays((glDrawArrays_client_proc_t)ptr);
	ptr = getProc("glDrawElements", userData); set_glDrawElements((glDrawElements_client_proc_t)ptr);
	ptr = getProc("glEnable", userData); set_glEnable((glEnable_client_proc_t)ptr);
	ptr = getProc("glEnableClientState", userData); set_glEnableClientState((glEnableClientState_client_proc_t)ptr);
	ptr = getProc("glFinish", userData); set_glFinish((glFinish_client_proc_t)ptr);
	ptr = getProc("glFlush", userData); set_glFlush((glFlush_client_proc_t)ptr);
	ptr = getProc("glFogx", userData); set_glFogx((glFogx_client_proc_t)ptr);
	ptr = getProc("glFogxv", userData); set_glFogxv((glFogxv_client_proc_t)ptr);
	ptr = getProc("glFrontFace", userData); set_glFrontFace((glFrontFace_client_proc_t)ptr);
	ptr = getProc("glFrustumx", userData); set_glFrustumx((glFrustumx_client_proc_t)ptr);
	ptr = getProc("glGetBooleanv", userData); set_glGetBooleanv((glGetBooleanv_client_proc_t)ptr);
	ptr = getProc("glGetBufferParameteriv", userData); set_glGetBufferParameteriv((glGetBufferParameteriv_client_proc_t)ptr);
	ptr = getProc("glClipPlanex", userData); set_glClipPlanex((glClipPlanex_client_proc_t)ptr);
	ptr = getProc("glGenBuffers", userData); set_glGenBuffers((glGenBuffers_client_proc_t)ptr);
	ptr = getProc("glGenTextures", userData); set_glGenTextures((glGenTextures_client_proc_t)ptr);
	ptr = getProc("glGetError", userData); set_glGetError((glGetError_client_proc_t)ptr);
	ptr = getProc("glGetFixedv", userData); set_glGetFixedv((glGetFixedv_client_proc_t)ptr);
	ptr = getProc("glGetIntegerv", userData); set_glGetIntegerv((glGetIntegerv_client_proc_t)ptr);
	ptr = getProc("glGetLightxv", userData); set_glGetLightxv((glGetLightxv_client_proc_t)ptr);
	ptr = getProc("glGetMaterialxv", userData); set_glGetMaterialxv((glGetMaterialxv_client_proc_t)ptr);
	ptr = getProc("glGetPointerv", userData); set_glGetPointerv((glGetPointerv_client_proc_t)ptr);
	ptr = getProc("glGetString", userData); set_glGetString((glGetString_client_proc_t)ptr);
	ptr = getProc("glGetTexEnviv", userData); set_glGetTexEnviv((glGetTexEnviv_client_proc_t)ptr);
	ptr = getProc("glGetTexEnvxv", userData); set_glGetTexEnvxv((glGetTexEnvxv_client_proc_t)ptr);
	ptr = getProc("glGetTexParameteriv", userData); set_glGetTexParameteriv((glGetTexParameteriv_client_proc_t)ptr);
	ptr = getProc("glGetTexParameterxv", userData); set_glGetTexParameterxv((glGetTexParameterxv_client_proc_t)ptr);
	ptr = getProc("glHint", userData); set_glHint((glHint_client_proc_t)ptr);
	ptr = getProc("glIsBuffer", userData); set_glIsBuffer((glIsBuffer_client_proc_t)ptr);
	ptr = getProc("glIsEnabled", userData); set_glIsEnabled((glIsEnabled_client_proc_t)ptr);
	ptr = getProc("glIsTexture", userData); set_glIsTexture((glIsTexture_client_proc_t)ptr);
	ptr = getProc("glLightModelx", userData); set_glLightModelx((glLightModelx_client_proc_t)ptr);
	ptr = getProc("glLightModelxv", userData); set_glLightModelxv((glLightModelxv_client_proc_t)ptr);
	ptr = getProc("glLightx", userData); set_glLightx((glLightx_client_proc_t)ptr);
	ptr = getProc("glLightxv", userData); set_glLightxv((glLightxv_client_proc_t)ptr);
	ptr = getProc("glLineWidthx", userData); set_glLineWidthx((glLineWidthx_client_proc_t)ptr);
	ptr = getProc("glLoadIdentity", userData); set_glLoadIdentity((glLoadIdentity_client_proc_t)ptr);
	ptr = getProc("glLoadMatrixx", userData); set_glLoadMatrixx((glLoadMatrixx_client_proc_t)ptr);
	ptr = getProc("glLogicOp", userData); set_glLogicOp((glLogicOp_client_proc_t)ptr);
	ptr = getProc("glMaterialx", userData); set_glMaterialx((glMaterialx_client_proc_t)ptr);
	ptr = getProc("glMaterialxv", userData); set_glMaterialxv((glMaterialxv_client_proc_t)ptr);
	ptr = getProc("glMatrixMode", userData); set_glMatrixMode((glMatrixMode_client_proc_t)ptr);
	ptr = getProc("glMultMatrixx", userData); set_glMultMatrixx((glMultMatrixx_client_proc_t)ptr);
	ptr = getProc("glMultiTexCoord4x", userData); set_glMultiTexCoord4x((glMultiTexCoord4x_client_proc_t)ptr);
	ptr = getProc("glNormal3x", userData); set_glNormal3x((glNormal3x_client_proc_t)ptr);
	ptr = getProc("glNormalPointer", userData); set_glNormalPointer((glNormalPointer_client_proc_t)ptr);
	ptr = getProc("glOrthox", userData); set_glOrthox((glOrthox_client_proc_t)ptr);
	ptr = getProc("glPixelStorei", userData); set_glPixelStorei((glPixelStorei_client_proc_t)ptr);
	ptr = getProc("glPointParameterx", userData); set_glPointParameterx((glPointParameterx_client_proc_t)ptr);
	ptr = getProc("glPointParameterxv", userData); set_glPointParameterxv((glPointParameterxv_client_proc_t)ptr);
	ptr = getProc("glPointSizex", userData); set_glPointSizex((glPointSizex_client_proc_t)ptr);
	ptr = getProc("glPolygonOffsetx", userData); set_glPolygonOffsetx((glPolygonOffsetx_client_proc_t)ptr);
	ptr = getProc("glPopMatrix", userData); set_glPopMatrix((glPopMatrix_client_proc_t)ptr);
	ptr = getProc("glPushMatrix", userData); set_glPushMatrix((glPushMatrix_client_proc_t)ptr);
	ptr = getProc("glReadPixels", userData); set_glReadPixels((glReadPixels_client_proc_t)ptr);
	ptr = getProc("glRotatex", userData); set_glRotatex((glRotatex_client_proc_t)ptr);
	ptr = getProc("glSampleCoverage", userData); set_glSampleCoverage((glSampleCoverage_client_proc_t)ptr);
	ptr = getProc("glSampleCoveragex", userData); set_glSampleCoveragex((glSampleCoveragex_client_proc_t)ptr);
	ptr = getProc("glScalex", userData); set_glScalex((glScalex_client_proc_t)ptr);
	ptr = getProc("glScissor", userData); set_glScissor((glScissor_client_proc_t)ptr);
	ptr = getProc("glShadeModel", userData); set_glShadeModel((glShadeModel_client_proc_t)ptr);
	ptr = getProc("glStencilFunc", userData); set_glStencilFunc((glStencilFunc_client_proc_t)ptr);
	ptr = getProc("glStencilMask", userData); set_glStencilMask((glStencilMask_client_proc_t)ptr);
	ptr = getProc("glStencilOp", userData); set_glStencilOp((glStencilOp_client_proc_t)ptr);
	ptr = getProc("glTexCoordPointer", userData); set_glTexCoordPointer((glTexCoordPointer_client_proc_t)ptr);
	ptr = getProc("glTexEnvi", userData); set_glTexEnvi((glTexEnvi_client_proc_t)ptr);
	ptr = getProc("glTexEnvx", userData); set_glTexEnvx((glTexEnvx_client_proc_t)ptr);
	ptr = getProc("glTexEnviv", userData); set_glTexEnviv((glTexEnviv_client_proc_t)ptr);
	ptr = getProc("glTexEnvxv", userData); set_glTexEnvxv((glTexEnvxv_client_proc_t)ptr);
	ptr = getProc("glTexImage2D", userData); set_glTexImage2D((glTexImage2D_client_proc_t)ptr);
	ptr = getProc("glTexParameteri", userData); set_glTexParameteri((glTexParameteri_client_proc_t)ptr);
	ptr = getProc("glTexParameterx", userData); set_glTexParameterx((glTexParameterx_client_proc_t)ptr);
	ptr = getProc("glTexParameteriv", userData); set_glTexParameteriv((glTexParameteriv_client_proc_t)ptr);
	ptr = getProc("glTexParameterxv", userData); set_glTexParameterxv((glTexParameterxv_client_proc_t)ptr);
	ptr = getProc("glTexSubImage2D", userData); set_glTexSubImage2D((glTexSubImage2D_client_proc_t)ptr);
	ptr = getProc("glTranslatex", userData); set_glTranslatex((glTranslatex_client_proc_t)ptr);
	ptr = getProc("glVertexPointer", userData); set_glVertexPointer((glVertexPointer_client_proc_t)ptr);
	ptr = getProc("glViewport", userData); set_glViewport((glViewport_client_proc_t)ptr);
	ptr = getProc("glPointSizePointerOES", userData); set_glPointSizePointerOES((glPointSizePointerOES_client_proc_t)ptr);
	ptr = getProc("glVertexPointerOffset", userData); set_glVertexPointerOffset((glVertexPointerOffset_client_proc_t)ptr);
	ptr = getProc("glColorPointerOffset", userData); set_glColorPointerOffset((glColorPointerOffset_client_proc_t)ptr);
	ptr = getProc("glNormalPointerOffset", userData); set_glNormalPointerOffset((glNormalPointerOffset_client_proc_t)ptr);
	ptr = getProc("glPointSizePointerOffset", userData); set_glPointSizePointerOffset((glPointSizePointerOffset_client_proc_t)ptr);
	ptr = getProc("glTexCoordPointerOffset", userData); set_glTexCoordPointerOffset((glTexCoordPointerOffset_client_proc_t)ptr);
	ptr = getProc("glWeightPointerOffset", userData); set_glWeightPointerOffset((glWeightPointerOffset_client_proc_t)ptr);
	ptr = getProc("glMatrixIndexPointerOffset", userData); set_glMatrixIndexPointerOffset((glMatrixIndexPointerOffset_client_proc_t)ptr);
	ptr = getProc("glVertexPointerData", userData); set_glVertexPointerData((glVertexPointerData_client_proc_t)ptr);
	ptr = getProc("glColorPointerData", userData); set_glColorPointerData((glColorPointerData_client_proc_t)ptr);
	ptr = getProc("glNormalPointerData", userData); set_glNormalPointerData((glNormalPointerData_client_proc_t)ptr);
	ptr = getProc("glTexCoordPointerData", userData); set_glTexCoordPointerData((glTexCoordPointerData_client_proc_t)ptr);
	ptr = getProc("glPointSizePointerData", userData); set_glPointSizePointerData((glPointSizePointerData_client_proc_t)ptr);
	ptr = getProc("glWeightPointerData", userData); set_glWeightPointerData((glWeightPointerData_client_proc_t)ptr);
	ptr = getProc("glMatrixIndexPointerData", userData); set_glMatrixIndexPointerData((glMatrixIndexPointerData_client_proc_t)ptr);
	ptr = getProc("glDrawElementsOffset", userData); set_glDrawElementsOffset((glDrawElementsOffset_client_proc_t)ptr);
	ptr = getProc("glDrawElementsData", userData); set_glDrawElementsData((glDrawElementsData_client_proc_t)ptr);
	ptr = getProc("glGetCompressedTextureFormats", userData); set_glGetCompressedTextureFormats((glGetCompressedTextureFormats_client_proc_t)ptr);
	ptr = getProc("glFinishRoundTrip", userData); set_glFinishRoundTrip((glFinishRoundTrip_client_proc_t)ptr);
	ptr = getProc("glBlendEquationSeparateOES", userData); set_glBlendEquationSeparateOES((glBlendEquationSeparateOES_client_proc_t)ptr);
	ptr = getProc("glBlendFuncSeparateOES", userData); set_glBlendFuncSeparateOES((glBlendFuncSeparateOES_client_proc_t)ptr);
	ptr = getProc("glBlendEquationOES", userData); set_glBlendEquationOES((glBlendEquationOES_client_proc_t)ptr);
	ptr = getProc("glDrawTexsOES", userData); set_glDrawTexsOES((glDrawTexsOES_client_proc_t)ptr);
	ptr = getProc("glDrawTexiOES", userData); set_glDrawTexiOES((glDrawTexiOES_client_proc_t)ptr);
	ptr = getProc("glDrawTexxOES", userData); set_glDrawTexxOES((glDrawTexxOES_client_proc_t)ptr);
	ptr = getProc("glDrawTexsvOES", userData); set_glDrawTexsvOES((glDrawTexsvOES_client_proc_t)ptr);
	ptr = getProc("glDrawTexivOES", userData); set_glDrawTexivOES((glDrawTexivOES_client_proc_t)ptr);
	ptr = getProc("glDrawTexxvOES", userData); set_glDrawTexxvOES((glDrawTexxvOES_client_proc_t)ptr);
	ptr = getProc("glDrawTexfOES", userData); set_glDrawTexfOES((glDrawTexfOES_client_proc_t)ptr);
	ptr = getProc("glDrawTexfvOES", userData); set_glDrawTexfvOES((glDrawTexfvOES_client_proc_t)ptr);
	ptr = getProc("glEGLImageTargetTexture2DOES", userData); set_glEGLImageTargetTexture2DOES((glEGLImageTargetTexture2DOES_client_proc_t)ptr);
	ptr = getProc("glEGLImageTargetRenderbufferStorageOES", userData); set_glEGLImageTargetRenderbufferStorageOES((glEGLImageTargetRenderbufferStorageOES_client_proc_t)ptr);
	ptr = getProc("glAlphaFuncxOES", userData); set_glAlphaFuncxOES((glAlphaFuncxOES_client_proc_t)ptr);
	ptr = getProc("glClearColorxOES", userData); set_glClearColorxOES((glClearColorxOES_client_proc_t)ptr);
	ptr = getProc("glClearDepthxOES", userData); set_glClearDepthxOES((glClearDepthxOES_client_proc_t)ptr);
	ptr = getProc("glClipPlanexOES", userData); set_glClipPlanexOES((glClipPlanexOES_client_proc_t)ptr);
	ptr = getProc("glClipPlanexIMG", userData); set_glClipPlanexIMG((glClipPlanexIMG_client_proc_t)ptr);
	ptr = getProc("glColor4xOES", userData); set_glColor4xOES((glColor4xOES_client_proc_t)ptr);
	ptr = getProc("glDepthRangexOES", userData); set_glDepthRangexOES((glDepthRangexOES_client_proc_t)ptr);
	ptr = getProc("glFogxOES", userData); set_glFogxOES((glFogxOES_client_proc_t)ptr);
	ptr = getProc("glFogxvOES", userData); set_glFogxvOES((glFogxvOES_client_proc_t)ptr);
	ptr = getProc("glFrustumxOES", userData); set_glFrustumxOES((glFrustumxOES_client_proc_t)ptr);
	ptr = getProc("glGetClipPlanexOES", userData); set_glGetClipPlanexOES((glGetClipPlanexOES_client_proc_t)ptr);
	ptr = getProc("glGetClipPlanex", userData); set_glGetClipPlanex((glGetClipPlanex_client_proc_t)ptr);
	ptr = getProc("glGetFixedvOES", userData); set_glGetFixedvOES((glGetFixedvOES_client_proc_t)ptr);
	ptr = getProc("glGetLightxvOES", userData); set_glGetLightxvOES((glGetLightxvOES_client_proc_t)ptr);
	ptr = getProc("glGetMaterialxvOES", userData); set_glGetMaterialxvOES((glGetMaterialxvOES_client_proc_t)ptr);
	ptr = getProc("glGetTexEnvxvOES", userData); set_glGetTexEnvxvOES((glGetTexEnvxvOES_client_proc_t)ptr);
	ptr = getProc("glGetTexParameterxvOES", userData); set_glGetTexParameterxvOES((glGetTexParameterxvOES_client_proc_t)ptr);
	ptr = getProc("glLightModelxOES", userData); set_glLightModelxOES((glLightModelxOES_client_proc_t)ptr);
	ptr = getProc("glLightModelxvOES", userData); set_glLightModelxvOES((glLightModelxvOES_client_proc_t)ptr);
	ptr = getProc("glLightxOES", userData); set_glLightxOES((glLightxOES_client_proc_t)ptr);
	ptr = getProc("glLightxvOES", userData); set_glLightxvOES((glLightxvOES_client_proc_t)ptr);
	ptr = getProc("glLineWidthxOES", userData); set_glLineWidthxOES((glLineWidthxOES_client_proc_t)ptr);
	ptr = getProc("glLoadMatrixxOES", userData); set_glLoadMatrixxOES((glLoadMatrixxOES_client_proc_t)ptr);
	ptr = getProc("glMaterialxOES", userData); set_glMaterialxOES((glMaterialxOES_client_proc_t)ptr);
	ptr = getProc("glMaterialxvOES", userData); set_glMaterialxvOES((glMaterialxvOES_client_proc_t)ptr);
	ptr = getProc("glMultMatrixxOES", userData); set_glMultMatrixxOES((glMultMatrixxOES_client_proc_t)ptr);
	ptr = getProc("glMultiTexCoord4xOES", userData); set_glMultiTexCoord4xOES((glMultiTexCoord4xOES_client_proc_t)ptr);
	ptr = getProc("glNormal3xOES", userData); set_glNormal3xOES((glNormal3xOES_client_proc_t)ptr);
	ptr = getProc("glOrthoxOES", userData); set_glOrthoxOES((glOrthoxOES_client_proc_t)ptr);
	ptr = getProc("glPointParameterxOES", userData); set_glPointParameterxOES((glPointParameterxOES_client_proc_t)ptr);
	ptr = getProc("glPointParameterxvOES", userData); set_glPointParameterxvOES((glPointParameterxvOES_client_proc_t)ptr);
	ptr = getProc("glPointSizexOES", userData); set_glPointSizexOES((glPointSizexOES_client_proc_t)ptr);
	ptr = getProc("glPolygonOffsetxOES", userData); set_glPolygonOffsetxOES((glPolygonOffsetxOES_client_proc_t)ptr);
	ptr = getProc("glRotatexOES", userData); set_glRotatexOES((glRotatexOES_client_proc_t)ptr);
	ptr = getProc("glSampleCoveragexOES", userData); set_glSampleCoveragexOES((glSampleCoveragexOES_client_proc_t)ptr);
	ptr = getProc("glScalexOES", userData); set_glScalexOES((glScalexOES_client_proc_t)ptr);
	ptr = getProc("glTexEnvxOES", userData); set_glTexEnvxOES((glTexEnvxOES_client_proc_t)ptr);
	ptr = getProc("glTexEnvxvOES", userData); set_glTexEnvxvOES((glTexEnvxvOES_client_proc_t)ptr);
	ptr = getProc("glTexParameterxOES", userData); set_glTexParameterxOES((glTexParameterxOES_client_proc_t)ptr);
	ptr = getProc("glTexParameterxvOES", userData); set_glTexParameterxvOES((glTexParameterxvOES_client_proc_t)ptr);
	ptr = getProc("glTranslatexOES", userData); set_glTranslatexOES((glTranslatexOES_client_proc_t)ptr);
	ptr = getProc("glIsRenderbufferOES", userData); set_glIsRenderbufferOES((glIsRenderbufferOES_client_proc_t)ptr);
	ptr = getProc("glBindRenderbufferOES", userData); set_glBindRenderbufferOES((glBindRenderbufferOES_client_proc_t)ptr);
	ptr = getProc("glDeleteRenderbuffersOES", userData); set_glDeleteRenderbuffersOES((glDeleteRenderbuffersOES_client_proc_t)ptr);
	ptr = getProc("glGenRenderbuffersOES", userData); set_glGenRenderbuffersOES((glGenRenderbuffersOES_client_proc_t)ptr);
	ptr = getProc("glRenderbufferStorageOES", userData); set_glRenderbufferStorageOES((glRenderbufferStorageOES_client_proc_t)ptr);
	ptr = getProc("glGetRenderbufferParameterivOES", userData); set_glGetRenderbufferParameterivOES((glGetRenderbufferParameterivOES_client_proc_t)ptr);
	ptr = getProc("glIsFramebufferOES", userData); set_glIsFramebufferOES((glIsFramebufferOES_client_proc_t)ptr);
	ptr = getProc("glBindFramebufferOES", userData); set_glBindFramebufferOES((glBindFramebufferOES_client_proc_t)ptr);
	ptr = getProc("glDeleteFramebuffersOES", userData); set_glDeleteFramebuffersOES((glDeleteFramebuffersOES_client_proc_t)ptr);
	ptr = getProc("glGenFramebuffersOES", userData); set_glGenFramebuffersOES((glGenFramebuffersOES_client_proc_t)ptr);
	ptr = getProc("glCheckFramebufferStatusOES", userData); set_glCheckFramebufferStatusOES((glCheckFramebufferStatusOES_client_proc_t)ptr);
	ptr = getProc("glFramebufferRenderbufferOES", userData); set_glFramebufferRenderbufferOES((glFramebufferRenderbufferOES_client_proc_t)ptr);
	ptr = getProc("glFramebufferTexture2DOES", userData); set_glFramebufferTexture2DOES((glFramebufferTexture2DOES_client_proc_t)ptr);
	ptr = getProc("glGetFramebufferAttachmentParameterivOES", userData); set_glGetFramebufferAttachmentParameterivOES((glGetFramebufferAttachmentParameterivOES_client_proc_t)ptr);
	ptr = getProc("glGenerateMipmapOES", userData); set_glGenerateMipmapOES((glGenerateMipmapOES_client_proc_t)ptr);
	ptr = getProc("glMapBufferOES", userData); set_glMapBufferOES((glMapBufferOES_client_proc_t)ptr);
	ptr = getProc("glUnmapBufferOES", userData); set_glUnmapBufferOES((glUnmapBufferOES_client_proc_t)ptr);
	ptr = getProc("glGetBufferPointervOES", userData); set_glGetBufferPointervOES((glGetBufferPointervOES_client_proc_t)ptr);
	ptr = getProc("glCurrentPaletteMatrixOES", userData); set_glCurrentPaletteMatrixOES((glCurrentPaletteMatrixOES_client_proc_t)ptr);
	ptr = getProc("glLoadPaletteFromModelViewMatrixOES", userData); set_glLoadPaletteFromModelViewMatrixOES((glLoadPaletteFromModelViewMatrixOES_client_proc_t)ptr);
	ptr = getProc("glMatrixIndexPointerOES", userData); set_glMatrixIndexPointerOES((glMatrixIndexPointerOES_client_proc_t)ptr);
	ptr = getProc("glWeightPointerOES", userData); set_glWeightPointerOES((glWeightPointerOES_client_proc_t)ptr);
	ptr = getProc("glQueryMatrixxOES", userData); set_glQueryMatrixxOES((glQueryMatrixxOES_client_proc_t)ptr);
	ptr = getProc("glDepthRangefOES", userData); set_glDepthRangefOES((glDepthRangefOES_client_proc_t)ptr);
	ptr = getProc("glFrustumfOES", userData); set_glFrustumfOES((glFrustumfOES_client_proc_t)ptr);
	ptr = getProc("glOrthofOES", userData); set_glOrthofOES((glOrthofOES_client_proc_t)ptr);
	ptr = getProc("glClipPlanefOES", userData); set_glClipPlanefOES((glClipPlanefOES_client_proc_t)ptr);
	ptr = getProc("glClipPlanefIMG", userData); set_glClipPlanefIMG((glClipPlanefIMG_client_proc_t)ptr);
	ptr = getProc("glGetClipPlanefOES", userData); set_glGetClipPlanefOES((glGetClipPlanefOES_client_proc_t)ptr);
	ptr = getProc("glClearDepthfOES", userData); set_glClearDepthfOES((glClearDepthfOES_client_proc_t)ptr);
	ptr = getProc("glTexGenfOES", userData); set_glTexGenfOES((glTexGenfOES_client_proc_t)ptr);
	ptr = getProc("glTexGenfvOES", userData); set_glTexGenfvOES((glTexGenfvOES_client_proc_t)ptr);
	ptr = getProc("glTexGeniOES", userData); set_glTexGeniOES((glTexGeniOES_client_proc_t)ptr);
	ptr = getProc("glTexGenivOES", userData); set_glTexGenivOES((glTexGenivOES_client_proc_t)ptr);
	ptr = getProc("glTexGenxOES", userData); set_glTexGenxOES((glTexGenxOES_client_proc_t)ptr);
	ptr = getProc("glTexGenxvOES", userData); set_glTexGenxvOES((glTexGenxvOES_client_proc_t)ptr);
	ptr = getProc("glGetTexGenfvOES", userData); set_glGetTexGenfvOES((glGetTexGenfvOES_client_proc_t)ptr);
	ptr = getProc("glGetTexGenivOES", userData); set_glGetTexGenivOES((glGetTexGenivOES_client_proc_t)ptr);
	ptr = getProc("glGetTexGenxvOES", userData); set_glGetTexGenxvOES((glGetTexGenxvOES_client_proc_t)ptr);
	ptr = getProc("glBindVertexArrayOES", userData); set_glBindVertexArrayOES((glBindVertexArrayOES_client_proc_t)ptr);
	ptr = getProc("glDeleteVertexArraysOES", userData); set_glDeleteVertexArraysOES((glDeleteVertexArraysOES_client_proc_t)ptr);
	ptr = getProc("glGenVertexArraysOES", userData); set_glGenVertexArraysOES((glGenVertexArraysOES_client_proc_t)ptr);
	ptr = getProc("glIsVertexArrayOES", userData); set_glIsVertexArrayOES((glIsVertexArrayOES_client_proc_t)ptr);
	ptr = getProc("glDiscardFramebufferEXT", userData); set_glDiscardFramebufferEXT((glDiscardFramebufferEXT_client_proc_t)ptr);
	ptr = getProc("glMultiDrawArraysEXT", userData); set_glMultiDrawArraysEXT((glMultiDrawArraysEXT_client_proc_t)ptr);
	ptr = getProc("glMultiDrawElementsEXT", userData); set_glMultiDrawElementsEXT((glMultiDrawElementsEXT_client_proc_t)ptr);
	ptr = getProc("glMultiDrawArraysSUN", userData); set_glMultiDrawArraysSUN((glMultiDrawArraysSUN_client_proc_t)ptr);
	ptr = getProc("glMultiDrawElementsSUN", userData); set_glMultiDrawElementsSUN((glMultiDrawElementsSUN_client_proc_t)ptr);
	ptr = getProc("glRenderbufferStorageMultisampleIMG", userData); set_glRenderbufferStorageMultisampleIMG((glRenderbufferStorageMultisampleIMG_client_proc_t)ptr);
	ptr = getProc("glFramebufferTexture2DMultisampleIMG", userData); set_glFramebufferTexture2DMultisampleIMG((glFramebufferTexture2DMultisampleIMG_client_proc_t)ptr);
	ptr = getProc("glDeleteFencesNV", userData); set_glDeleteFencesNV((glDeleteFencesNV_client_proc_t)ptr);
	ptr = getProc("glGenFencesNV", userData); set_glGenFencesNV((glGenFencesNV_client_proc_t)ptr);
	ptr = getProc("glIsFenceNV", userData); set_glIsFenceNV((glIsFenceNV_client_proc_t)ptr);
	ptr = getProc("glTestFenceNV", userData); set_glTestFenceNV((glTestFenceNV_client_proc_t)ptr);
	ptr = getProc("glGetFenceivNV", userData); set_glGetFenceivNV((glGetFenceivNV_client_proc_t)ptr);
	ptr = getProc("glFinishFenceNV", userData); set_glFinishFenceNV((glFinishFenceNV_client_proc_t)ptr);
	ptr = getProc("glSetFenceNV", userData); set_glSetFenceNV((glSetFenceNV_client_proc_t)ptr);
	ptr = getProc("glGetDriverControlsQCOM", userData); set_glGetDriverControlsQCOM((glGetDriverControlsQCOM_client_proc_t)ptr);
	ptr = getProc("glGetDriverControlStringQCOM", userData); set_glGetDriverControlStringQCOM((glGetDriverControlStringQCOM_client_proc_t)ptr);
	ptr = getProc("glEnableDriverControlQCOM", userData); set_glEnableDriverControlQCOM((glEnableDriverControlQCOM_client_proc_t)ptr);
	ptr = getProc("glDisableDriverControlQCOM", userData); set_glDisableDriverControlQCOM((glDisableDriverControlQCOM_client_proc_t)ptr);
	ptr = getProc("glExtGetTexturesQCOM", userData); set_glExtGetTexturesQCOM((glExtGetTexturesQCOM_client_proc_t)ptr);
	ptr = getProc("glExtGetBuffersQCOM", userData); set_glExtGetBuffersQCOM((glExtGetBuffersQCOM_client_proc_t)ptr);
	ptr = getProc("glExtGetRenderbuffersQCOM", userData); set_glExtGetRenderbuffersQCOM((glExtGetRenderbuffersQCOM_client_proc_t)ptr);
	ptr = getProc("glExtGetFramebuffersQCOM", userData); set_glExtGetFramebuffersQCOM((glExtGetFramebuffersQCOM_client_proc_t)ptr);
	ptr = getProc("glExtGetTexLevelParameterivQCOM", userData); set_glExtGetTexLevelParameterivQCOM((glExtGetTexLevelParameterivQCOM_client_proc_t)ptr);
	ptr = getProc("glExtTexObjectStateOverrideiQCOM", userData); set_glExtTexObjectStateOverrideiQCOM((glExtTexObjectStateOverrideiQCOM_client_proc_t)ptr);
	ptr = getProc("glExtGetTexSubImageQCOM", userData); set_glExtGetTexSubImageQCOM((glExtGetTexSubImageQCOM_client_proc_t)ptr);
	ptr = getProc("glExtGetBufferPointervQCOM", userData); set_glExtGetBufferPointervQCOM((glExtGetBufferPointervQCOM_client_proc_t)ptr);
	ptr = getProc("glExtGetShadersQCOM", userData); set_glExtGetShadersQCOM((glExtGetShadersQCOM_client_proc_t)ptr);
	ptr = getProc("glExtGetProgramsQCOM", userData); set_glExtGetProgramsQCOM((glExtGetProgramsQCOM_client_proc_t)ptr);
	ptr = getProc("glExtIsProgramBinaryQCOM", userData); set_glExtIsProgramBinaryQCOM((glExtIsProgramBinaryQCOM_client_proc_t)ptr);
	ptr = getProc("glExtGetProgramBinarySourceQCOM", userData); set_glExtGetProgramBinarySourceQCOM((glExtGetProgramBinarySourceQCOM_client_proc_t)ptr);
	ptr = getProc("glStartTilingQCOM", userData); set_glStartTilingQCOM((glStartTilingQCOM_client_proc_t)ptr);
	ptr = getProc("glEndTilingQCOM", userData); set_glEndTilingQCOM((glEndTilingQCOM_client_proc_t)ptr);
	return 0;
}

