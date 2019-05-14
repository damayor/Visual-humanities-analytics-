#pragma once

#define HAPTICDLLWRAPPER __declspec(dllexport)

extern "C" { // this makes all the following declarations available externally as C-style functions

	HAPTICDLLWRAPPER bool InitHapticDeviceWrp();

	HAPTICDLLWRAPPER bool InitTwoHapticDevicesWrp(int *name1, int *name2);

	HAPTICDLLWRAPPER void SetModeWrp(int mode);

	HAPTICDLLWRAPPER int GetModeWrp();

	HAPTICDLLWRAPPER void SetTouchableFaceWrp(int *face);

	HAPTICDLLWRAPPER void SetWorkspacePositionWrp(int *position);

	HAPTICDLLWRAPPER void SetWorkspaceSizeWrp(int *size);

	HAPTICDLLWRAPPER void SetWorkspaceWrp(int *position, int *size);

	HAPTICDLLWRAPPER void UpdateWorkspaceWrp(float CameraAngleOnY);

	HAPTICDLLWRAPPER void UpdateHapticWorkspaceWrp(int *value);

	HAPTICDLLWRAPPER int *GetWorkspacePositionWrp();

	HAPTICDLLWRAPPER int *GetWorkspaceSizeWrp();

	HAPTICDLLWRAPPER void RenderHapticWrp();

	HAPTICDLLWRAPPER int *GetDevicePositionWrp();

	HAPTICDLLWRAPPER int *GetProxyPositionWrp();

	HAPTICDLLWRAPPER int *GetProxyRightWrp();

	HAPTICDLLWRAPPER int *GetProxyDirectionWrp();

	HAPTICDLLWRAPPER int *GetProxyTorqueWrp();

	HAPTICDLLWRAPPER int *GetProxyOrientationWrp();

	HAPTICDLLWRAPPER void SetObjectTransformWrp(int objectId, int *name, int *transform);

	HAPTICDLLWRAPPER void SetObjectMeshWrp(int objectId, int *vertices, int *triangles, int verticesNum, int trianglesNum);

	HAPTICDLLWRAPPER int *GetHapticObjectNameWrp(int ObjId);

	HAPTICDLLWRAPPER int GetHapticObjectCountWrp();

	HAPTICDLLWRAPPER int GetHapticObjectFaceCountWrp(int ObjId);

	HAPTICDLLWRAPPER void  SetStiffnessWrp(int ObjId, float stiffness);

	HAPTICDLLWRAPPER void  SetDampingWrp(int ObjId, float damping);

	HAPTICDLLWRAPPER void  SetStaticFrictionWrp(int ObjId, float staticFriction);

	HAPTICDLLWRAPPER void  SetDynamicFrictionWrp(int ObjId, float dynamicFriction);

	HAPTICDLLWRAPPER void  SetTangentialStiffnessWrp(int ObjId, float tgStiffness);

	HAPTICDLLWRAPPER void  SetTangentialDampingWrp(int ObjId, float tgDamping);

	HAPTICDLLWRAPPER void  SetPopThroughWrp(int ObjId, float popThrough);

	HAPTICDLLWRAPPER void  SetPuncturedStaticFrictionWrp(int ObjId, float puncturedStaticFriction);

	HAPTICDLLWRAPPER void  SetPuncturedDynamicFrictionWrp(int ObjId, float puncturedDynamicFriction);

	HAPTICDLLWRAPPER void  SetMassWrp(int ObjId, float mass);

	HAPTICDLLWRAPPER void  SetFixedWrp(int ObjId, bool fix);

	HAPTICDLLWRAPPER bool IsFixedWrp(int ObjId);

	HAPTICDLLWRAPPER bool SetEffectWrp(int *type, int effect_index, float gain, float magnitude, float duration, float frequency, int *position, int *direction);

	HAPTICDLLWRAPPER bool StartEffectWrp(int effect_index);

	HAPTICDLLWRAPPER bool StopEffectWrp(int effect_index);

	HAPTICDLLWRAPPER void LaunchHapticEventWrp();

	HAPTICDLLWRAPPER bool GetButton1StateWrp();

	HAPTICDLLWRAPPER bool GetButton2StateWrp();

	HAPTICDLLWRAPPER bool GetButtonStateWrp(int device, int button);

	HAPTICDLLWRAPPER int *GetTouchedObjectNameWrp();

	HAPTICDLLWRAPPER int GetTouchedObjectIdWrp();

	HAPTICDLLWRAPPER bool GetContactWrp();

	HAPTICDLLWRAPPER int *GetTouchedObjNameWrp(int device);

	HAPTICDLLWRAPPER int GetTouchedObjIdWrp(int device);

	HAPTICDLLWRAPPER bool GetHapticContactWrp(int device);

	HAPTICDLLWRAPPER int *GetManipulatedObjectNameWrp();

	HAPTICDLLWRAPPER int GetManipulatedObjectIdWrp();

	HAPTICDLLWRAPPER void SetMaximumPunctureLenghtWrp(float maxPenetration);

	HAPTICDLLWRAPPER bool GetPunctureStateWrp();

	HAPTICDLLWRAPPER float GetPenetrationRatioWrp();

	HAPTICDLLWRAPPER int *GetFirstScpPtWrp();

	HAPTICDLLWRAPPER int *GetPunctureDirectionWrp();

	HAPTICDLLWRAPPER void SetPunctureLayersWrp(int layerNb, int *nameObjects[], int *layerDepth);

	HAPTICDLLWRAPPER bool SetDeviceEffectWrp(int device, int *type, int effect_index, float gain, float magnitude, float duration, float frequency, int *position, int *direction);

	HAPTICDLLWRAPPER bool StartDeviceEffectWrp(int device, int effect_index);

	HAPTICDLLWRAPPER bool StopDeviceEffectWrp(int device, int effect_index);
}
