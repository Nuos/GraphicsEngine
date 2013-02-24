/*
 * Variables.h
 *
 *  Created on: 08.05.2012
 *      Author: nopper
 */

#ifndef VARIABLES_H_
#define VARIABLES_H_

#define u_projectionMatrix "u_projectionMatrix"
#define u_viewMatrix "u_viewMatrix"
#define u_modelMatrix "u_modelMatrix"
#define u_normalModelViewMatrix "u_normalModelViewMatrix"
#define u_normalModelMatrix "u_normalModelMatrix"

#define u_eyePosition "u_eyePosition"

#define u_lightType "u_lightType"
#define u_ambientLightColor "u_light.ambientColor"
#define u_diffuseLightColor "u_light.diffuseColor"
#define u_specularLightColor "u_light.specularColor"
#define u_lightDirection "u_light.direction"
#define u_lightPosition "u_light.position"
#define u_lightConstantAttenuation "u_light.constantAttenuation"
#define u_lightLinearAttenuation "u_light.linearAttenuation"
#define u_lightQuadraticAttenuation "u_light.quadraticAttenuation"
#define u_lightSpotDirection "u_light.spotDirection"
#define u_lightSpotCosCutOff "u_light.spotCosCutOff"
#define u_lightSpotExponent "u_light.spotExponent"

#define u_emissiveColor "u_material.emissiveColor"
#define u_ambientColor "u_material.ambientColor"
#define u_diffuseColor "u_material.diffuseColor"
#define u_diffuseTexture "u_material.diffuseTexture"
#define u_specularColor "u_material.specularColor"
#define u_shininess "u_material.shininess"
#define u_normalMapTexture "u_material.normalMapTexture"
#define u_reflection "u_material.reflectionColor"
#define u_refraction "u_material.refractionColor"

#define u_hasSkinning "u_hasSkinning"
#define u_hasDiffuseTexture "u_hasDiffuseTexture"
#define u_hasNormalMapTexture "u_hasNormalMapTexture"
#define u_hasCubeMapTexture "u_hasCubeMapTexture"

#define u_writeBrightColor "u_writeBrightColor"
#define u_brightColorLimit "u_brightColorLimit"

#define u_bindMatrix "u_bindMatrix"
#define u_bindNormalMatrix "u_bindNormalMatrix"
#define u_jointMatrix "u_jointMatrix"
#define u_jointNormalMatrix "u_jointNormalMatrix"

#define u_fontLeft "u_fontLeft"
#define u_fontTop "u_fontTop"
#define u_fontWidth "u_fontWidth"
#define u_fontHeight "u_fontHeight"
#define u_fontTexture "u_fontTexture"
#define u_fontColor "u_fontColor"

#define u_numberSamples "u_numberSamples"

#define u_screenTexture "u_screenTexture"
#define u_bloomTexture "u_bloomTexture"
#define u_blurTexture "u_blurTexture"

#define u_useBlur "u_useBlur"
#define u_blurHorizontal "u_blurHorizontal"
#define u_blurVertical "u_blurVertical"
#define u_useBloom "u_useBloom"
#define u_bloomLevel "u_bloomLevel"
#define u_useGamma "u_useGamma"
#define u_gamma "u_gamma"
#define u_useExposure "u_useExposure"
#define u_exposure "u_exposure"

#define u_lineGeometryColor "u_lineGeometryColor"
#define u_lineGeometryOffset0 "u_lineGeometryOffset0"
#define u_lineGeometryOffset1 "u_lineGeometryOffset1"

#define u_cubemap "u_cubemap"

#define u_eta "u_eta"
#define u_reflectanceNormalIncidence "u_reflectanceNormalIncidence"

#define a_vertex "a_vertex"
#define a_normal "a_normal"
#define a_tangent "a_tangent"
#define a_bitangent "a_bitangent"
#define a_texCoord "a_texCoord"

#define a_boneIndex_0 "a_boneIndex_0"
#define a_boneIndex_1 "a_boneIndex_1"
#define a_boneWeight_0 "a_boneWeight_0"
#define a_boneWeight_1 "a_boneWeight_1"
#define a_boneCounter "a_boneCounter"

#endif /* VARIABLES_H_ */