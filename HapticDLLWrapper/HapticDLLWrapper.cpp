#include "ASimpleHapticPluginDeviceEffect.dll"
#include "HapticDLLWrapper.h"

extern "C" {

	bool InitHapticDeviceWrp()
	{
		return;
	}

	bool InitTwoHapticDevicesWrp(int *name1, int *name2)
	{
		return;
	}

	void SetModeWrp(int mode)
	{
		return;
	}

	int GetModeWrp()
	{
		return;
	}

	void SetTouchableFaceWrp(int *face)
	{
		return;
	}

	void SetWorkspacePositionWrp(int *position)
	{
		return;
	}

	void SetWorkspaceSizeWrp(int *size)
	{
		return;
	}

	void SetWorkspaceWrp(int *position, int *size)
	{
		return;
	}

	void UpdateWorkspaceWrp(float CameraAngleOnY)
	{
		return;
	}

	void UpdateHapticWorkspaceWrp(int *value)
	{
		return;
	}

	int *GetWorkspacePositionWrp()
	{
		return;
	}

	int *GetWorkspaceSizeWrp()
	{
		return;
	}

	void RenderHapticWrp()
	{
		return;
	}

	int *GetDevicePositionWrp()
	{
		return;
	}

	int *GetProxyPositionWrp()
	{
		return;
	}

	int *GetProxyRightWrp()
	{
		return;
	}

	int *GetProxyDirectionWrp()
	{
		return;
	}

	int *GetProxyTorqueWrp()
	{
		return;
	}

	int *GetProxyOrientationWrp()
	{
		return;
	}

	void SetObjectTransformWrp(int objectId, int *name, int *transform)
	{
		return;
	}

	void SetObjectMeshWrp(int objectId, int *vertices, int *triangles, int verticesNum, int trianglesNum)
	{
		return;
	}

	int *GetHapticObjectNameWrp(int ObjId)
	{
		return;
	}

	int GetHapticObjectCountWrp()
	{
		return;
	}

	int GetHapticObjectFaceCountWrp(int ObjId)
	{
		return;
	}

	void  SetStiffnessWrp(int ObjId, float stiffness)
	{
		return;
	}

	void  SetDampingWrp(int ObjId, float damping)
	{
		return;
	}

	void  SetStaticFrictionWrp(int ObjId, float staticFriction)
	{
		return;
	}

	void  SetDynamicFrictionWrp(int ObjId, float dynamicFriction)
	{
		return;
	}

	void  SetTangentialStiffnessWrp(int ObjId, float tgStiffness)
	{
		return;
	}

	void  SetTangentialDampingWrp(int ObjId, float tgDamping)
	{
		return;
	}

	void  SetPopThroughWrp(int ObjId, float popThrough)
	{
		return;
	}

	void  SetPuncturedStaticFrictionWrp(int ObjId, float puncturedStaticFriction)
	{
		return;
	}

	void  SetPuncturedDynamicFrictionWrp(int ObjId, float puncturedDynamicFriction)
	{
		return;
	}

	void  SetMassWrp(int ObjId, float mass)
	{
		return;
	}

	void  SetFixedWrp(int ObjId, bool fix)
	{
		return;
	}

	bool IsFixedWrp(int ObjId)
	{
		return;
	}

	bool SetEffectWrp(int *type, int effect_index, float gain, float magnitude, float duration, float frequency, int *position, int *direction)
	{
		return;
	}

	bool StartEffectWrp(int effect_index)
	{
		return;
	}

	bool StopEffectWrp(int effect_index)
	{
		return;
	}

	void LaunchHapticEventWrp()
	{
		return;
	}

	bool GetButton1StateWrp()
	{
		return;
	}

	bool GetButton2StateWrp()
	{
		return;
	}

	bool GetButtonStateWrp(int device, int button)
	{
		return;
	}

	int *GetTouchedObjectNameWrp()
	{
		return;
	}

	int GetTouchedObjectIdWrp()
	{
		return;
	}

	bool GetContactWrp()
	{
		return;
	}

	int *GetTouchedObjNameWrp(int device)
	{
		return;
	}

	int GetTouchedObjIdWrp(int device)
	{
		return;
	}

	bool GetHapticContactWrp(int device)
	{
		return;
	}

	int *GetManipulatedObjectNameWrp()
	{
		return;
	}

	int GetManipulatedObjectIdWrp()
	{
		return;
	}

	void SetMaximumPunctureLenghtWrp(float maxPenetration)
	{
		return;
	}

	bool GetPunctureStateWrp()
	{
		return;
	}

	float GetPenetrationRatioWrp()
	{
		return;
	}

	int *GetFirstScpPtWrp()
	{
		return;
	}

	int *GetPunctureDirectionWrp()
	{
		return;
	}

	void SetPunctureLayersWrp(int layerNb, int *nameObjects[], int *layerDepth)
	{
		return;
	}

	bool SetDeviceEffectWrp(int device, int *type, int effect_index, float gain, float magnitude, float duration, float frequency, int *position, int *direction)
	{
		return;
	}

	bool StartDeviceEffectWrp(int device, int effect_index)
	{
		return;
	}

	bool StopDeviceEffectWrp(int device, int effect_index)
	{
		return;
	}
}
