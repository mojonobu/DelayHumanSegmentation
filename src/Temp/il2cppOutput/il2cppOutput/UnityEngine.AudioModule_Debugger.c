#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"





IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[2] = 
{
	{ 1, 0,  5 } /*tableIndex: 0 */,
	{ 1, 0,  6 } /*tableIndex: 1 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[1] = 
{
	"deviceID",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[46] = 
{
	{ 0, 0 } /* 0x06000001 System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean) */,
	{ 0, 0 } /* 0x06000002 System.Boolean UnityEngine.AudioSettings::StartAudioOutput() */,
	{ 0, 0 } /* 0x06000003 System.Boolean UnityEngine.AudioSettings::StopAudioOutput() */,
	{ 0, 0 } /* 0x06000004 System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000005 System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean) */,
	{ 0, 0 } /* 0x06000006 System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object) */,
	{ 0, 0 } /* 0x06000007 System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult) */,
	{ 0, 0 } /* 0x06000008 System.Boolean UnityEngine.AudioSettings/Mobile::get_muteState() */,
	{ 0, 0 } /* 0x06000009 System.Void UnityEngine.AudioSettings/Mobile::set_muteState(System.Boolean) */,
	{ 0, 0 } /* 0x0600000A System.Boolean UnityEngine.AudioSettings/Mobile::get_stopAudioOutputOnMute() */,
	{ 0, 0 } /* 0x0600000B System.Void UnityEngine.AudioSettings/Mobile::InvokeOnMuteStateChanged(System.Boolean) */,
	{ 0, 0 } /* 0x0600000C System.Void UnityEngine.AudioSettings/Mobile::StartAudioOutput() */,
	{ 0, 0 } /* 0x0600000D System.Void UnityEngine.AudioSettings/Mobile::StopAudioOutput() */,
	{ 0, 0 } /* 0x0600000E System.Void UnityEngine.AudioSettings/Mobile::.cctor() */,
	{ 0, 0 } /* 0x0600000F System.Void UnityEngine.AudioClip::.ctor() */,
	{ 0, 0 } /* 0x06000010 System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[]) */,
	{ 0, 0 } /* 0x06000011 System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32) */,
	{ 0, 0 } /* 0x06000012 System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000013 System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[]) */,
	{ 0, 0 } /* 0x06000014 System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object) */,
	{ 0, 0 } /* 0x06000015 System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult) */,
	{ 0, 0 } /* 0x06000016 System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000017 System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32) */,
	{ 0, 0 } /* 0x06000018 System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object) */,
	{ 0, 0 } /* 0x06000019 System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult) */,
	{ 0, 0 } /* 0x0600001A System.Void UnityEngine.AudioSource::PlayHelper(UnityEngine.AudioSource,System.UInt64) */,
	{ 0, 0 } /* 0x0600001B System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip) */,
	{ 0, 0 } /* 0x0600001C System.Void UnityEngine.AudioSource::Play() */,
	{ 0, 0 } /* 0x0600001D System.Int32 UnityEngine.Microphone::GetMicrophoneDeviceIDFromName(System.String) */,
	{ 0, 0 } /* 0x0600001E UnityEngine.AudioClip UnityEngine.Microphone::StartRecord(System.Int32,System.Boolean,System.Single,System.Int32) */,
	{ 0, 0 } /* 0x0600001F System.Void UnityEngine.Microphone::GetDeviceCaps(System.Int32,System.Int32&,System.Int32&) */,
	{ 0, 1 } /* 0x06000020 UnityEngine.AudioClip UnityEngine.Microphone::Start(System.String,System.Boolean,System.Int32,System.Int32) */,
	{ 0, 0 } /* 0x06000021 System.String[] UnityEngine.Microphone::get_devices() */,
	{ 1, 1 } /* 0x06000022 System.Void UnityEngine.Microphone::GetDeviceCaps(System.String,System.Int32&,System.Int32&) */,
	{ 0, 0 } /* 0x06000023 System.String UnityEngine.WebCamDevice::get_name() */,
	{ 0, 0 } /* 0x06000024 UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices() */,
	{ 0, 0 } /* 0x06000025 UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle() */,
	{ 0, 0 } /* 0x06000026 System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable) */,
	{ 0, 0 } /* 0x06000027 UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle() */,
	{ 0, 0 } /* 0x06000028 System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable) */,
	{ 0, 0 } /* 0x06000029 System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesAvailable(System.Int32) */,
	{ 0, 0 } /* 0x0600002A System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesOverflow(System.Int32) */,
	{ 0, 0 } /* 0x0600002B System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x0600002C System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32) */,
	{ 0, 0 } /* 0x0600002D System.IAsyncResult UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::BeginInvoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32,System.AsyncCallback,System.Object) */,
	{ 0, 0 } /* 0x0600002E System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::EndInvoke(System.IAsyncResult) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
extern Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[180] = 
{
	{ 14917, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 14917, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 14917, 1, 331, 331, 9, 10, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 14917, 1, 332, 332, 13, 53, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 14917, 1, 332, 332, 0, 0, 10, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 14917, 1, 333, 333, 17, 63, 13, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 14917, 1, 334, 334, 9, 10, 25, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 14917, 1, 333, 333, 17, 63, 19, kSequencePointKind_StepOut, 0, 7 } /* seqPointIndex: 7 */,
	{ 14924, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 14924, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 14924, 1, 359, 359, 17, 21, 0, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 14925, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 14925, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 14925, 1, 360, 360, 17, 29, 0, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 14926, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 14926, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 15 } /* seqPointIndex: 15 */,
	{ 14926, 1, 367, 367, 17, 18, 0, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 14926, 1, 368, 368, 21, 51, 1, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 14926, 1, 369, 369, 17, 18, 9, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 14927, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 14927, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 14927, 1, 392, 392, 13, 14, 0, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 14927, 1, 393, 393, 17, 39, 1, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 14927, 1, 393, 393, 0, 0, 13, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 14927, 1, 394, 394, 17, 18, 16, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 14927, 1, 395, 395, 21, 38, 17, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 14927, 1, 396, 396, 21, 47, 24, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 14927, 1, 396, 396, 0, 0, 30, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 14927, 1, 397, 397, 21, 22, 33, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 14927, 1, 398, 398, 25, 39, 34, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 14927, 1, 398, 398, 0, 0, 40, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 14927, 1, 399, 399, 29, 47, 43, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 14927, 1, 401, 401, 29, 48, 51, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 14927, 1, 402, 402, 21, 22, 57, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 14927, 1, 403, 403, 21, 52, 58, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 14927, 1, 403, 403, 0, 0, 67, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 14927, 1, 404, 404, 25, 50, 70, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 14927, 1, 405, 405, 17, 18, 82, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 14927, 1, 406, 406, 13, 14, 83, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 14927, 1, 393, 393, 17, 39, 2, kSequencePointKind_StepOut, 0, 39 } /* seqPointIndex: 39 */,
	{ 14927, 1, 395, 395, 21, 38, 18, kSequencePointKind_StepOut, 0, 40 } /* seqPointIndex: 40 */,
	{ 14927, 1, 396, 396, 21, 47, 24, kSequencePointKind_StepOut, 0, 41 } /* seqPointIndex: 41 */,
	{ 14927, 1, 398, 398, 25, 39, 34, kSequencePointKind_StepOut, 0, 42 } /* seqPointIndex: 42 */,
	{ 14927, 1, 399, 399, 29, 47, 43, kSequencePointKind_StepOut, 0, 43 } /* seqPointIndex: 43 */,
	{ 14927, 1, 401, 401, 29, 48, 51, kSequencePointKind_StepOut, 0, 44 } /* seqPointIndex: 44 */,
	{ 14927, 1, 404, 404, 25, 50, 76, kSequencePointKind_StepOut, 0, 45 } /* seqPointIndex: 45 */,
	{ 14928, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 14928, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 14928, 1, 409, 409, 13, 14, 0, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 14928, 1, 410, 410, 17, 50, 1, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 14928, 1, 411, 411, 13, 14, 7, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 14928, 1, 410, 410, 17, 50, 1, kSequencePointKind_StepOut, 0, 51 } /* seqPointIndex: 51 */,
	{ 14929, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 14929, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 14929, 1, 414, 414, 13, 14, 0, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 14929, 1, 415, 415, 17, 49, 1, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 14929, 1, 416, 416, 13, 14, 7, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 14929, 1, 415, 415, 17, 49, 1, kSequencePointKind_StepOut, 0, 57 } /* seqPointIndex: 57 */,
	{ 14930, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 14930, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 14930, 1, 361, 361, 17, 22, 0, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 14930, 1, 363, 363, 13, 64, 6, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 14931, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 14931, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 14931, 1, 598, 598, 9, 68, 0, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 14931, 1, 602, 602, 9, 78, 7, kSequencePointKind_Normal, 0, 65 } /* seqPointIndex: 65 */,
	{ 14931, 1, 463, 463, 9, 28, 14, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 14931, 1, 463, 463, 29, 30, 21, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 14931, 1, 463, 463, 30, 31, 22, kSequencePointKind_Normal, 0, 68 } /* seqPointIndex: 68 */,
	{ 14931, 1, 463, 463, 9, 28, 15, kSequencePointKind_StepOut, 0, 69 } /* seqPointIndex: 69 */,
	{ 14932, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 14932, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 14932, 1, 606, 606, 9, 10, 0, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 14932, 1, 607, 607, 13, 45, 1, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 14932, 1, 607, 607, 0, 0, 11, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 14932, 1, 608, 608, 17, 43, 14, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 14932, 1, 609, 609, 9, 10, 27, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 14932, 1, 608, 608, 17, 43, 21, kSequencePointKind_StepOut, 0, 77 } /* seqPointIndex: 77 */,
	{ 14933, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 78 } /* seqPointIndex: 78 */,
	{ 14933, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 79 } /* seqPointIndex: 79 */,
	{ 14933, 1, 613, 613, 9, 10, 0, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 14933, 1, 614, 614, 13, 50, 1, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 14933, 1, 614, 614, 0, 0, 11, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 14933, 1, 615, 615, 17, 52, 14, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 14933, 1, 616, 616, 9, 10, 27, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 14933, 1, 615, 615, 17, 52, 21, kSequencePointKind_StepOut, 0, 85 } /* seqPointIndex: 85 */,
	{ 14944, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 14944, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 87 } /* seqPointIndex: 87 */,
	{ 14944, 1, 819, 819, 9, 10, 0, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 14944, 1, 820, 820, 13, 33, 1, kSequencePointKind_Normal, 0, 89 } /* seqPointIndex: 89 */,
	{ 14944, 1, 821, 821, 9, 10, 10, kSequencePointKind_Normal, 0, 90 } /* seqPointIndex: 90 */,
	{ 14944, 1, 820, 820, 13, 33, 4, kSequencePointKind_StepOut, 0, 91 } /* seqPointIndex: 91 */,
	{ 14948, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 92 } /* seqPointIndex: 92 */,
	{ 14948, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 93 } /* seqPointIndex: 93 */,
	{ 14948, 1, 1279, 1279, 9, 10, 0, kSequencePointKind_Normal, 0, 94 } /* seqPointIndex: 94 */,
	{ 14948, 1, 1280, 1280, 13, 70, 1, kSequencePointKind_Normal, 0, 95 } /* seqPointIndex: 95 */,
	{ 14948, 1, 1282, 1282, 13, 32, 8, kSequencePointKind_Normal, 0, 96 } /* seqPointIndex: 96 */,
	{ 14948, 1, 1282, 1282, 0, 0, 13, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
	{ 14948, 1, 1283, 1283, 17, 105, 16, kSequencePointKind_Normal, 0, 98 } /* seqPointIndex: 98 */,
	{ 14948, 1, 1285, 1285, 13, 32, 33, kSequencePointKind_Normal, 0, 99 } /* seqPointIndex: 99 */,
	{ 14948, 1, 1285, 1285, 0, 0, 41, kSequencePointKind_Normal, 0, 100 } /* seqPointIndex: 100 */,
	{ 14948, 1, 1286, 1286, 17, 135, 44, kSequencePointKind_Normal, 0, 101 } /* seqPointIndex: 101 */,
	{ 14948, 1, 1288, 1288, 13, 37, 71, kSequencePointKind_Normal, 0, 102 } /* seqPointIndex: 102 */,
	{ 14948, 1, 1288, 1288, 0, 0, 80, kSequencePointKind_Normal, 0, 103 } /* seqPointIndex: 103 */,
	{ 14948, 1, 1289, 1289, 17, 128, 83, kSequencePointKind_Normal, 0, 104 } /* seqPointIndex: 104 */,
	{ 14948, 1, 1291, 1291, 13, 32, 110, kSequencePointKind_Normal, 0, 105 } /* seqPointIndex: 105 */,
	{ 14948, 1, 1291, 1291, 0, 0, 119, kSequencePointKind_Normal, 0, 106 } /* seqPointIndex: 106 */,
	{ 14948, 1, 1292, 1292, 17, 125, 123, kSequencePointKind_Normal, 0, 107 } /* seqPointIndex: 107 */,
	{ 14948, 1, 1294, 1294, 13, 70, 150, kSequencePointKind_Normal, 0, 108 } /* seqPointIndex: 108 */,
	{ 14948, 1, 1295, 1295, 9, 10, 164, kSequencePointKind_Normal, 0, 109 } /* seqPointIndex: 109 */,
	{ 14948, 1, 1280, 1280, 13, 70, 2, kSequencePointKind_StepOut, 0, 110 } /* seqPointIndex: 110 */,
	{ 14948, 1, 1283, 1283, 17, 105, 22, kSequencePointKind_StepOut, 0, 111 } /* seqPointIndex: 111 */,
	{ 14948, 1, 1283, 1283, 17, 105, 27, kSequencePointKind_StepOut, 0, 112 } /* seqPointIndex: 112 */,
	{ 14948, 1, 1286, 1286, 17, 135, 60, kSequencePointKind_StepOut, 0, 113 } /* seqPointIndex: 113 */,
	{ 14948, 1, 1286, 1286, 17, 135, 65, kSequencePointKind_StepOut, 0, 114 } /* seqPointIndex: 114 */,
	{ 14948, 1, 1289, 1289, 17, 128, 99, kSequencePointKind_StepOut, 0, 115 } /* seqPointIndex: 115 */,
	{ 14948, 1, 1289, 1289, 17, 128, 104, kSequencePointKind_StepOut, 0, 116 } /* seqPointIndex: 116 */,
	{ 14948, 1, 1292, 1292, 17, 125, 139, kSequencePointKind_StepOut, 0, 117 } /* seqPointIndex: 117 */,
	{ 14948, 1, 1292, 1292, 17, 125, 144, kSequencePointKind_StepOut, 0, 118 } /* seqPointIndex: 118 */,
	{ 14948, 1, 1294, 1294, 13, 70, 155, kSequencePointKind_StepOut, 0, 119 } /* seqPointIndex: 119 */,
	{ 14950, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 120 } /* seqPointIndex: 120 */,
	{ 14950, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 121 } /* seqPointIndex: 121 */,
	{ 14950, 1, 1336, 1336, 9, 10, 0, kSequencePointKind_Normal, 0, 122 } /* seqPointIndex: 122 */,
	{ 14950, 1, 1337, 1337, 13, 25, 1, kSequencePointKind_Normal, 0, 123 } /* seqPointIndex: 123 */,
	{ 14950, 1, 1338, 1338, 13, 25, 4, kSequencePointKind_Normal, 0, 124 } /* seqPointIndex: 124 */,
	{ 14950, 1, 1340, 1340, 13, 70, 7, kSequencePointKind_Normal, 0, 125 } /* seqPointIndex: 125 */,
	{ 14950, 1, 1341, 1341, 13, 32, 14, kSequencePointKind_Normal, 0, 126 } /* seqPointIndex: 126 */,
	{ 14950, 1, 1341, 1341, 0, 0, 19, kSequencePointKind_Normal, 0, 127 } /* seqPointIndex: 127 */,
	{ 14950, 1, 1342, 1342, 17, 24, 22, kSequencePointKind_Normal, 0, 128 } /* seqPointIndex: 128 */,
	{ 14950, 1, 1344, 1344, 13, 63, 24, kSequencePointKind_Normal, 0, 129 } /* seqPointIndex: 129 */,
	{ 14950, 1, 1345, 1345, 9, 10, 33, kSequencePointKind_Normal, 0, 130 } /* seqPointIndex: 130 */,
	{ 14950, 1, 1340, 1340, 13, 70, 8, kSequencePointKind_StepOut, 0, 131 } /* seqPointIndex: 131 */,
	{ 14950, 1, 1344, 1344, 13, 63, 27, kSequencePointKind_StepOut, 0, 132 } /* seqPointIndex: 132 */,
	{ 14951, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 133 } /* seqPointIndex: 133 */,
	{ 14951, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 134 } /* seqPointIndex: 134 */,
	{ 14951, 2, 31, 31, 34, 35, 0, kSequencePointKind_Normal, 0, 135 } /* seqPointIndex: 135 */,
	{ 14951, 2, 31, 31, 36, 50, 1, kSequencePointKind_Normal, 0, 136 } /* seqPointIndex: 136 */,
	{ 14951, 2, 31, 31, 51, 52, 10, kSequencePointKind_Normal, 0, 137 } /* seqPointIndex: 137 */,
	{ 14953, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 138 } /* seqPointIndex: 138 */,
	{ 14953, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 139 } /* seqPointIndex: 139 */,
	{ 14953, 3, 49, 49, 9, 10, 0, kSequencePointKind_Normal, 0, 140 } /* seqPointIndex: 140 */,
	{ 14953, 3, 50, 50, 13, 29, 1, kSequencePointKind_Normal, 0, 141 } /* seqPointIndex: 141 */,
	{ 14953, 3, 51, 51, 9, 10, 10, kSequencePointKind_Normal, 0, 142 } /* seqPointIndex: 142 */,
	{ 14954, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 143 } /* seqPointIndex: 143 */,
	{ 14954, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 144 } /* seqPointIndex: 144 */,
	{ 14954, 3, 64, 64, 9, 10, 0, kSequencePointKind_Normal, 0, 145 } /* seqPointIndex: 145 */,
	{ 14954, 3, 65, 65, 13, 53, 1, kSequencePointKind_Normal, 0, 146 } /* seqPointIndex: 146 */,
	{ 14954, 3, 66, 66, 9, 10, 22, kSequencePointKind_Normal, 0, 147 } /* seqPointIndex: 147 */,
	{ 14954, 3, 65, 65, 13, 53, 2, kSequencePointKind_StepOut, 0, 148 } /* seqPointIndex: 148 */,
	{ 14954, 3, 65, 65, 13, 53, 9, kSequencePointKind_StepOut, 0, 149 } /* seqPointIndex: 149 */,
	{ 14954, 3, 65, 65, 13, 53, 14, kSequencePointKind_StepOut, 0, 150 } /* seqPointIndex: 150 */,
	{ 14955, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 151 } /* seqPointIndex: 151 */,
	{ 14955, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 152 } /* seqPointIndex: 152 */,
	{ 14955, 4, 47, 47, 9, 10, 0, kSequencePointKind_Normal, 0, 153 } /* seqPointIndex: 153 */,
	{ 14955, 4, 48, 48, 13, 29, 1, kSequencePointKind_Normal, 0, 154 } /* seqPointIndex: 154 */,
	{ 14955, 4, 49, 49, 9, 10, 10, kSequencePointKind_Normal, 0, 155 } /* seqPointIndex: 155 */,
	{ 14956, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 156 } /* seqPointIndex: 156 */,
	{ 14956, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 157 } /* seqPointIndex: 157 */,
	{ 14956, 4, 62, 62, 9, 10, 0, kSequencePointKind_Normal, 0, 158 } /* seqPointIndex: 158 */,
	{ 14956, 4, 63, 63, 13, 53, 1, kSequencePointKind_Normal, 0, 159 } /* seqPointIndex: 159 */,
	{ 14956, 4, 64, 64, 9, 10, 22, kSequencePointKind_Normal, 0, 160 } /* seqPointIndex: 160 */,
	{ 14956, 4, 63, 63, 13, 53, 2, kSequencePointKind_StepOut, 0, 161 } /* seqPointIndex: 161 */,
	{ 14956, 4, 63, 63, 13, 53, 9, kSequencePointKind_StepOut, 0, 162 } /* seqPointIndex: 162 */,
	{ 14956, 4, 63, 63, 13, 53, 14, kSequencePointKind_StepOut, 0, 163 } /* seqPointIndex: 163 */,
	{ 14957, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 164 } /* seqPointIndex: 164 */,
	{ 14957, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 165 } /* seqPointIndex: 165 */,
	{ 14957, 5, 177, 177, 9, 10, 0, kSequencePointKind_Normal, 0, 166 } /* seqPointIndex: 166 */,
	{ 14957, 5, 178, 178, 13, 47, 1, kSequencePointKind_Normal, 0, 167 } /* seqPointIndex: 167 */,
	{ 14957, 5, 178, 178, 0, 0, 11, kSequencePointKind_Normal, 0, 168 } /* seqPointIndex: 168 */,
	{ 14957, 5, 180, 180, 17, 69, 14, kSequencePointKind_Normal, 0, 169 } /* seqPointIndex: 169 */,
	{ 14957, 5, 181, 181, 9, 10, 28, kSequencePointKind_Normal, 0, 170 } /* seqPointIndex: 170 */,
	{ 14957, 5, 180, 180, 17, 69, 22, kSequencePointKind_StepOut, 0, 171 } /* seqPointIndex: 171 */,
	{ 14958, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 172 } /* seqPointIndex: 172 */,
	{ 14958, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 173 } /* seqPointIndex: 173 */,
	{ 14958, 5, 185, 185, 9, 10, 0, kSequencePointKind_Normal, 0, 174 } /* seqPointIndex: 174 */,
	{ 14958, 5, 186, 186, 13, 46, 1, kSequencePointKind_Normal, 0, 175 } /* seqPointIndex: 175 */,
	{ 14958, 5, 186, 186, 0, 0, 11, kSequencePointKind_Normal, 0, 176 } /* seqPointIndex: 176 */,
	{ 14958, 5, 187, 187, 17, 75, 14, kSequencePointKind_Normal, 0, 177 } /* seqPointIndex: 177 */,
	{ 14958, 5, 188, 188, 9, 10, 28, kSequencePointKind_Normal, 0, 178 } /* seqPointIndex: 178 */,
	{ 14958, 5, 187, 187, 17, 75, 22, kSequencePointKind_StepOut, 0, 179 } /* seqPointIndex: 179 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "/Users/builduser/buildslave/unity/build/Modules/Audio/Public/ScriptBindings/Audio.bindings.cs", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //1 
{ "/Users/builduser/buildslave/unity/build/Runtime/Video/ScriptBindings/UnityEngineWebCamTexture.bindings.cs", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //2 
{ "/Users/builduser/buildslave/unity/build/Modules/Audio/Public/ScriptBindings/AudioClipPlayable.bindings.cs", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //3 
{ "/Users/builduser/buildslave/unity/build/Modules/Audio/Public/ScriptBindings/AudioMixerPlayable.bindings.cs", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //4 
{ "/Users/builduser/buildslave/unity/build/Modules/Audio/Public/ScriptBindings/AudioSampleProvider.bindings.cs", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //5 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[9] = 
{
	{ 2478, 1 },
	{ 2480, 1 },
	{ 2481, 1 },
	{ 2486, 1 },
	{ 2487, 1 },
	{ 2489, 2 },
	{ 2491, 3 },
	{ 2492, 4 },
	{ 2494, 5 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[14] = 
{
	{ 0, 26 },
	{ 0, 11 },
	{ 0, 84 },
	{ 0, 28 },
	{ 0, 28 },
	{ 0, 167 },
	{ 0, 34 },
	{ 0, 12 },
	{ 0, 12 },
	{ 0, 24 },
	{ 0, 12 },
	{ 0, 24 },
	{ 0, 29 },
	{ 0, 29 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[46] = 
{
	{ 26, 0, 1 } /* System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioSettings::StartAudioOutput() */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioSettings::StopAudioOutput() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean) */,
	{ 0, 0, 0 } /* System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioSettings/Mobile::get_muteState() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/Mobile::set_muteState(System.Boolean) */,
	{ 11, 1, 1 } /* System.Boolean UnityEngine.AudioSettings/Mobile::get_stopAudioOutputOnMute() */,
	{ 84, 2, 1 } /* System.Void UnityEngine.AudioSettings/Mobile::InvokeOnMuteStateChanged(System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/Mobile::StartAudioOutput() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/Mobile::StopAudioOutput() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/Mobile::.cctor() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip::.ctor() */,
	{ 28, 3, 1 } /* System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[]) */,
	{ 28, 4, 1 } /* System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[]) */,
	{ 0, 0, 0 } /* System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32) */,
	{ 0, 0, 0 } /* System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::PlayHelper(UnityEngine.AudioSource,System.UInt64) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSource::Play() */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.Microphone::GetMicrophoneDeviceIDFromName(System.String) */,
	{ 0, 0, 0 } /* UnityEngine.AudioClip UnityEngine.Microphone::StartRecord(System.Int32,System.Boolean,System.Single,System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Microphone::GetDeviceCaps(System.Int32,System.Int32&,System.Int32&) */,
	{ 167, 5, 1 } /* UnityEngine.AudioClip UnityEngine.Microphone::Start(System.String,System.Boolean,System.Int32,System.Int32) */,
	{ 0, 0, 0 } /* System.String[] UnityEngine.Microphone::get_devices() */,
	{ 34, 6, 1 } /* System.Void UnityEngine.Microphone::GetDeviceCaps(System.String,System.Int32&,System.Int32&) */,
	{ 12, 7, 1 } /* System.String UnityEngine.WebCamDevice::get_name() */,
	{ 0, 0, 0 } /* UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices() */,
	{ 12, 8, 1 } /* UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle() */,
	{ 24, 9, 1 } /* System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable) */,
	{ 12, 10, 1 } /* UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle() */,
	{ 24, 11, 1 } /* System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable) */,
	{ 29, 12, 1 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesAvailable(System.Int32) */,
	{ 29, 13, 1 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesOverflow(System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32) */,
	{ 0, 0, 0 } /* System.IAsyncResult UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::BeginInvoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32,System.AsyncCallback,System.Object) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::EndInvoke(System.IAsyncResult) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
extern const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_AudioModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_AudioModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	180,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_AudioModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	9,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
