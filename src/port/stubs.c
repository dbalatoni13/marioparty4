#include "dolphin/gx/GXVert.h"
#include <dolphin.h>
#include <stdarg.h>
#include <stdio.h>
#include <types.h>

// Credits: Super Monkey Ball

void OSReport(const char *msg, ...)
{
    va_list args;
    va_start(args, msg);
    vprintf(msg, args);
    va_end(args);
}

u32 OSGetConsoleType()
{
    return OS_CONSOLE_RETAIL1;
}

s32 CARDCancel(CARDFileInfo *fileInfo)
{
    puts("CARDCancel is a stub");
    return 0;
}

s32 CARDCheck(s32 chan)
{
    puts("CARDCheck is a stub");
    return 0;
}

s32 CARDCheckAsync(s32 chan, CARDCallback callback)
{
    puts("CARDCheckAsync is a stub");
    return 0;
}

s32 CARDClose(CARDFileInfo *fileInfo)
{
    puts("CARDClose is a stub");
    return 0;
}

s32 CARDCreate(s32 chan, const char *fileName, u32 size, CARDFileInfo *fileInfo)
{
    puts("CARDCreate is a stub");
    return 0;
}

s32 CARDCreateAsync(s32 chan, const char *fileName, u32 size, CARDFileInfo *fileInfo, CARDCallback callback)
{
    puts("CARDCreateAsync is a stub");
    return 0;
}

s32 CARDDelete(s32 chan, const char *fileName)
{
    puts("CARDDelete is a stub");
    return 0;
}

s32 CARDDeleteAsync(s32 chan, const char *fileName, CARDCallback callback)
{
    puts("CARDDeleteAsync is a stub");
    return 0;
}

s32 CARDFastDeleteAsync(s32 chan, s32 fileNo, CARDCallback callback)
{
    puts("CARDFastDeleteAsync is a stub");
    return 0;
}

s32 CARDFastOpen(s32 chan, s32 fileNo, CARDFileInfo *fileInfo)
{
    puts("CARDFastOpen is a stub");
    return 0;
}

s32 CARDFormat(s32 chan)
{
    puts("CARDFormat is a stub");
    return 0;
}

s32 CARDFreeBlocks(s32 chan, s32 *byteNotUsed, s32 *filesNotUsed)
{
    puts("CARDFreeBlocks is a stub");
    return 0;
}

s32 CARDGetResultCode(s32 chan)
{
    puts("CARDGetResultCode is a stub");
    return 0;
}

s32 CARDGetStatus(s32 chan, s32 fileNo, CARDStat *stat)
{
    puts("CARDGetStatus is a stub");
    return 0;
}

s32 CARDGetSectorSize(s32 chan, u32 *size)
{
    puts("CARDGetSectorSize is a stub");
    return 0;
}

void CARDInit()
{
    puts("CARDInit is a stub");
}

s32 CARDMount(s32 chan, void *workArea, CARDCallback detachCallback)
{
    puts("CARDMount is a stub");
    return 0;
}

s32 CARDMountAsync(s32 chan, void *workArea, CARDCallback detachCallback, CARDCallback attachCallback)
{
    puts("CARDMountAsync is a stub");
    return 0;
}

s32 CARDOpen(s32 chan, const char *fileName, CARDFileInfo *fileInfo)
{
    puts("CARDOpen is a stub");
    return 0;
}

s32 CARDProbeEx(s32 chan, s32 *memSize, s32 *sectorSize)
{
    puts("CARDProbeEx is a stub");
    return 0;
}

s32 CARDRead(CARDFileInfo *fileInfo, void *addr, s32 length, s32 offset)
{
    puts("CARDRead is a stub");
    return 0;
}

s32 CARDReadAsync(CARDFileInfo *fileInfo, void *addr, s32 length, s32 offset, CARDCallback callback)
{
    puts("CARDReadAsync is a stub");
    return 0;
}

s32 CARDRename(s32 chan, const char *oldName, const char *newName)
{
    puts("CARDRename is a stub");
    return 0;
}

s32 CARDRenameAsync(s32 chan, const char *oldName, const char *newName, CARDCallback callback)
{
    puts("CARDRenameAsync is a stub");
    return 0;
}

s32 CARDSetStatusAsync(s32 chan, s32 fileNo, CARDStat *stat, CARDCallback callback)
{
    puts("CARDSetStatusAsync is a stub");
    return 0;
}

s32 CARDUnmount(s32 chan)
{
    puts("CARDUnmount is a stub");
    return 0;
}

s32 CARDWrite(CARDFileInfo *fileInfo, const void *addr, s32 length, s32 offset)
{
    puts("CARDWrite is a stub");
    return 0;
}

s32 CARDWriteAsync(CARDFileInfo *fileInfo, const void *addr, s32 length, s32 offset, CARDCallback callback)
{
    puts("CARDWriteAsync is a stub");
    return 0;
}

void DCFlushRange(void *addr, u32 nBytes)
{
    puts("DCFlushRange is a stub");
}

void DCFlushRangeNoSync(void *addr, u32 nBytes)
{
    puts("DCFlushRangeNoSync is a stub");
}

void DCInvalidateRange(void *addr, u32 nBytes)
{
    puts("DCInvalidateRange is a stub");
}

void DCStoreRange(void *addr, u32 nBytes)
{
    puts("DCStoreRange is a stub");
}

void DCStoreRangeNoSync(void *addr, u32 nBytes)
{
    puts("DCStoreRangeNoSync is a stub");
}

void DEMOUpdateStats(unsigned char inc)
{
    puts("DEMOUpdateStats is a stub");
}

void DEMOPrintStats(void)
{
    puts("DEMOPrintStats is a stub");
}

s32 DVDCancel(DVDCommandBlock *block)
{
    puts("DVDCancel is a stub");
    return 0;
}

void DVDReadAbsAsyncForBS(void *a, struct bb2struct *b, int c, int d, void (*e)())
{
    puts("DVDReadAbsAsyncForBS is a stub");
}

void DVDReadDiskID(void *a, DVDDiskID *b, void (*c)())
{
    puts("DVDReadDiskID is a stub");
}

void DVDReset()
{
    puts("DVDReset is a stub");
}

BOOL EXIDeselect(int chan)
{
    puts("EXIDeselect is a stub");
    return FALSE;
}

BOOL EXIDma(int chan, void *buffer, s32 size, int d, int e)
{
    puts("EXIDma is a stub");
    return FALSE;
}

BOOL EXIImm(int chan, u32 *b, int c, int d, int e)
{
    puts("EXIImm is a stub");
    return FALSE;
}

BOOL EXILock(int chan, int b, int c)
{
    puts("EXILock is a stub");
    return FALSE;
}

BOOL EXISelect(int chan, int b, int c)
{
    puts("EXISelect is a stub");
    return FALSE;
}

BOOL EXISync(int chan)
{
    puts("EXISync is a stub");
    return FALSE;
}

BOOL EXIUnlock(int chan)
{
    puts("EXIUnlock is a stub");
    return FALSE;
}

void LCEnable()
{
    puts("LCEnable is a stub");
}

void OSClearContext(OSContext *context)
{
    puts("OSClearContext is a stub");
}

BOOL OSDisableInterrupts()
{
    puts("OSDisableInterrupts is a stub");
    return FALSE;
}

void OSDumpContext(OSContext *context)
{
    puts("OSDumpContext is a stub");
}

OSThread *OSGetCurrentThread()
{
    puts("OSGetCurrentThread is a stub");
    return 0;
}

u16 OSGetFontEncode()
{
    puts("OSGetFontEncode is a stub");
    return 0;
}

char *OSGetFontTexture(char *string, void **image, s32 *x, s32 *y, s32 *width)
{
    puts("OSGetFontTexture is a stub");
    return 0;
}

char *OSGetFontWidth(char *string, s32 *width)
{
    puts("OSGetFontWidth is a stub");
    return 0;
}

BOOL OSGetResetButtonState()
{
    puts("OSGetResetButtonState is a stub");
    return FALSE;
}

u32 OSGetStackPointer()
{
    puts("OSGetStackPointer is a stub");
    return 0;
}

BOOL OSInitFont(OSFontHeader *fontData)
{
    puts("OSInitFont is a stub");
    return FALSE;
}

BOOL OSLink(OSModuleInfo *newModule, void *bss)
{
    puts("OSLink is a stub");
    return FALSE;
}

void OSLoadContext(OSContext *context)
{
    puts("OSLoadContext is a stub");
}

void OSResetSystem(int reset, u32 resetCode, BOOL forceMenu)
{
    puts("OSResetSystem is a stub");
}

BOOL OSRestoreInterrupts(BOOL level)
{
    puts("OSRestoreInterrupts is a stub");
    return FALSE;
}

s32 OSResumeThread(OSThread *thread)
{
    puts("OSResumeThread is a stub");
    return 0;
}

void OSSetCurrentContext(OSContext *context)
{
    puts("OSSetCurrentContext is a stub");
}

void OSSetStringTable(const void *stringTable)
{
    puts("OSSetStringTable is a stub");
}

s32 OSSuspendThread(OSThread *thread)
{
    puts("OSSuspendThread is a stub");
    return 0;
}

void OSTicksToCalendarTime(OSTime ticks, OSCalendarTime *td)
{
    puts("OSTicksToCalendarTime is a stub");
}

BOOL OSUnlink(OSModuleInfo *oldModule)
{
    puts("OSUnlink is a stub");
    return FALSE;
}

void OSWakeupThread(OSThreadQueue *queue)
{
    puts("OSWakeupThread is a stub");
}

void PPCHalt()
{
    puts("PPCHalt is a stub");
}

void SoundChoID(int a, int b)
{
    puts("SoundChoID is a stub");
}

void SoundPan(int a, int b, int c)
{
    puts("SoundPan is a stub");
}

void SoundPitch(u16 a, int b)
{
    puts("SoundPitch is a stub");
}

void SoundRevID(int a, int b)
{
    puts("SoundRevID is a stub");
}

void VIConfigure(const GXRenderModeObj *rm)
{
    puts("VIConfigure is a stub");
}

void VIConfigurePan(u16 xOrg, u16 yOrg, u16 width, u16 height)
{
    puts("VIConfigurePan is a stub");
}

u32 VIGetRetraceCount()
{
    puts("VIGetRetraceCount is a stub");
    return 0; // TODO this might be important
}

u32 VIGetNextField()
{
    puts("VIGetNextField is a stub");
    return 0;
}

void VISetBlack(BOOL black)
{
    puts("VISetBlack is a stub");
}

void VISetNextFrameBuffer(void *fb)
{
    puts("VISetNextFrameBuffer is a stub");
}

void VIWaitForRetrace()
{
    puts("VIWaitForRetrace is a stub");
}

s32 __CARDFormatRegionAsync(int a, int b)
{
    puts("__CARDFormatRegionAsync is a stub");
    return 0;
}

void __GXSetSUTexSize()
{
    puts("__GXSetSUTexSize is a stub");
}

void __GXSetVAT()
{
    puts("__GXSetVAT is a stub");
}

void __GXSetVCD()
{
    puts("__GXSetVCD is a stub");
}

void __GXUpdateBPMask()
{
    puts("__GXUpdateBPMask is a stub");
}

u32 __OSGetDIConfig()
{
    puts("__OSGetDIConfig is a stub");
    return 0;
}

__OSInterruptHandler __OSSetInterruptHandler(__OSInterrupt interrupt, __OSInterruptHandler handler)
{
    puts("__OSSetInterruptHandler is a stub");
    return 0;
}

OSInterruptMask __OSUnmaskInterrupts(OSInterruptMask mask)
{
    puts("__OSUnmaskInterrupts is a stub");
    return 0;
}

void SISetSamplingRate(u32 msec)
{
    // Maybe we could include SI later
    puts("SISetSamplingRate is a stub");
}

VIRetraceCallback VISetPostRetraceCallback(VIRetraceCallback callback)
{
    puts("VISetPostRetraceCallback is a stub");
    // TODO
    return callback;
}

void GXSetGPMetric(GXPerf0 perf0, GXPerf1 perf1)
{
    puts("GXSetGPMetric is a stub");
}

void GXReadGPMetric(u32 *cnt0, u32 *cnt1)
{
    puts("GXReadGPMetric is a stub");
}

void GXClearGPMetric(void)
{
    puts("GXClearGPMetric is a stub");
}

void GXReadMemMetric(
    u32 *cp_req, u32 *tc_req, u32 *cpu_rd_req, u32 *cpu_wr_req, u32 *dsp_req, u32 *io_req, u32 *vi_req, u32 *pe_req, u32 *rf_req, u32 *fi_req)
{
    puts("GXReadMemMetric is a stub");
}

void GXClearMemMetric(void)
{
    puts("GXClearMemMetric is a stub");
}

void GXClearVCacheMetric(void)
{
    puts("GXClearVCacheMetric is a stub");
}

void GXReadPixMetric(u32 *top_pixels_in, u32 *top_pixels_out, u32 *bot_pixels_in, u32 *bot_pixels_out, u32 *clr_pixels_in, u32 *copy_clks)
{
    puts("GXReadPixMetric is a stub");
}

void GXClearPixMetric(void)
{
    puts("GXClearPixMetric is a stub");
}

void GXSetVCacheMetric(GXVCachePerf attr)
{
    puts("GXSetVCacheMetric is a stub");
}

void GXReadVCacheMetric(u32 *check, u32 *miss, u32 *stall)
{
    puts("GXReadVCacheMetric is a stub");
}

void GXSetDrawSync(u16 token)
{
    puts("GXSetDrawSync is a stub");
}

GXDrawSyncCallback GXSetDrawSyncCallback(GXDrawSyncCallback cb)
{
    puts("GXSetDrawSyncCallback is a stub");
    // TODO
    return cb;
}

void PPCSync(void)
{
    puts("PPCSync is a stub");
}

void GXColor3u8(u8 r, u8 g, u8 b)
{
    // TODO
    GXColor4u8(r, g, b, 255);
}

void GXNormal1x16(u16 index)
{
    puts("GXNormal1x16 is a stub");
}

void GXColor1x16(u16 index)
{
    puts("GXColor1x16 is a stub");
}

void GXTexCoord1x16(u16 index)
{
    puts("GXTexCoord1x16 is a stub");
}

void GXUnknownu16(const u16 x)
{
    puts("GXUnknownu16 is a stub");
}

void GXNormal3s16(s16 x, s16 y, s16 z)
{
    puts("GXNormal3s16 is a stub");
}

void GXPosition2u16(const u16 x, const u16 y)
{
    puts("GXPosition2u16 is a stub");
}

void GXPosition2f32(const f32 x, const f32 y)
{
    puts("GXPosition2f32 is a stub");
}

void GXPosition2s16(const s16 x, const s16 y)
{
    puts("GXPosition2s16 is a stub");
}

void GXColor1x8(u8 index) {
    puts("GXColor1x8 is a stub");
}

void GXWaitDrawDone(void)
{
    puts("GXWaitDrawDone is a stub");
}

void GXSetTevIndTile(GXTevStageID tev_stage, GXIndTexStageID ind_stage, u16 tilesize_s, u16 tilesize_t, u16 tilespacing_s, u16 tilespacing_t,
    GXIndTexFormat format, GXIndTexMtxID matrix_sel, GXIndTexBiasSel bias_sel, GXIndTexAlphaSel alpha_sel)
{
    puts("GXSetTevIndTile is a stub");
}

void GXSetTexCoordScaleManually(GXTexCoordID coord, u8 enable, u16 ss, u16 ts)
{
    puts("GXSetTexCoordScaleManually is a stub");
}

void GXResetWriteGatherPipe(void)
{
    puts("GXResetWriteGatherPipe is a stub");
}

// Hudson
void HuDvdErrDispInit(GXRenderModeObj *rmode, void *xfb1, void *xfb2) { }

void HuAudInit(void) { }

void HuARInit(void) { }

void msmSysRegularProc(void)
{
    puts("msmSysRegularProc is a stub");
}

void msmMusFdoutEnd(void)
{
    puts("msmMusFdoutEnd is a stub");
}

s32 HuSoftResetButtonCheck(void)
{
    puts("HuSoftResetButtonCheck is a stub");
}

void MGSeqMain(void)
{
    puts("MGSeqMain is a stub");
}
