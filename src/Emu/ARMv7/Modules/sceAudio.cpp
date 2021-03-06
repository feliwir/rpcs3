#include "stdafx.h"
#include "Emu/System.h"
#include "Emu/ARMv7/PSVFuncList.h"

#include "sceAudio.h"

s32 sceAudioOutOpenPort(s32 portType, s32 len, s32 freq, s32 param)
{
	throw EXCEPTION("");
}

s32 sceAudioOutReleasePort(s32 port)
{
	throw EXCEPTION("");
}

s32 sceAudioOutOutput(s32 port, vm::ptr<void> ptr)
{
	throw EXCEPTION("");
}

s32 sceAudioOutSetVolume(s32 port, s32 flag, vm::ptr<s32> vol)
{
	throw EXCEPTION("");
}

s32 sceAudioOutSetConfig(s32 port, s32 len, s32 freq, s32 param)
{
	throw EXCEPTION("");
}

s32 sceAudioOutGetConfig(s32 port, s32 configType)
{
	throw EXCEPTION("");
}

s32 sceAudioOutGetRestSample(s32 port)
{
	throw EXCEPTION("");
}

s32 sceAudioOutGetAdopt(s32 portType)
{
	throw EXCEPTION("");
}


#define REG_FUNC(nid, name) reg_psv_func(nid, &sceAudio, #name, name)

psv_log_base sceAudio("SceAudio", []()
{
	sceAudio.on_load = nullptr;
	sceAudio.on_unload = nullptr;
	sceAudio.on_stop = nullptr;
	sceAudio.on_error = nullptr;

	REG_FUNC(0x5BC341E4, sceAudioOutOpenPort);
	REG_FUNC(0x69E2E6B5, sceAudioOutReleasePort);
	REG_FUNC(0x02DB3F5F, sceAudioOutOutput);
	REG_FUNC(0x64167F11, sceAudioOutSetVolume);
	REG_FUNC(0xB8BA0D07, sceAudioOutSetConfig);
	REG_FUNC(0x9C8EDAEA, sceAudioOutGetConfig);
	REG_FUNC(0x9A5370C4, sceAudioOutGetRestSample);
	REG_FUNC(0x12FB1767, sceAudioOutGetAdopt);
	//REG_FUNC(0xC6D8D775, sceAudioInRaw);
});
