Multi Platform AR Foundation Project
-------------------------------------

This project is developed to make the project to be installed in all platforms i.e. Microsoft HoloLens, Android devices and Oculus devices.
This project is designed as such there is no need to change any script or values to build it different platforms other than their respective SDK changes.

In this document, all steps needed to build the app for multiple platforms will be mentioned in detail.

A. Building it to Microsoft HoloLens
	0. Disable "OVRCameraRig Variant" in heirarchy.
	1. Make sure Main Camera / MixedRealityPlayspace in heirarchy is enabled.
	2. Go to build settings and switch platform to "Universal windows platform".
	3. Configure mixed reality toolkit settings to Default HoloLens2 settings.
	4. Go to Mixed Reality Toolkit on top bar -> Utilities -> Configure unity project -> uncheck "MS Build for unity" and apply the changes.
	5. Go to build settings -> player settings -> XR settings -> enable VR supported and add "Windows mixed reality" sdk.
	6. Build it to HoloLens and try the app.

B. Building it to Android
	0. Disable "OVRCameraRig Variant" in heirarchy.
	1. Make sure Main Camera / MixedRealityPlayspace in heirarchy is enabled.
	2. Go to build settings and switch platform to "Android".
	3. Go to mixed reality toolkit settings and change the profile to "Android MixedRealityToolkitConfigurationProfile".
	4. Go to Mixed Reality Toolkit on top bar -> Utilities -> Configure unity project -> uncheck "MS Build for unity" and apply the changes.
	5. Go to build settings -> player settings -> XR settings -> enable VR supported and add "none" sdk.
	6. Build it to Android and try the app.

C. Building it to Oculus
	0. Enable "OVRCameraRig Variant" in heirarchy.
	1. Disable Main Camera / MixedRealityPlayspace in heirarchy.
	2. Go to build settings and switch platform to "Android".
	3. Go to mixed reality toolkit settings and change the profile to "OculusQuestConfigurationProfile".
	4. Go to Mixed Reality Toolkit on top bar -> Utilities -> Configure unity project -> uncheck "MS Build for unity" and apply the changes.
	5. Go to build settings -> player settings -> XR settings -> enable VR supported and add "none" sdk.
	6. Build it to Android and try the app.



