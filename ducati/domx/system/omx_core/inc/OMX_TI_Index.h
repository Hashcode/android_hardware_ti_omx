/*
 * Copyright (c) 2010, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 *  @file  omx_ti_index.h
 *         This file contains the vendor(TI) specific indexes
 *
 *  @path \OMAPSW_SysDev\multimedia\omx\khronos1_1\omx_core\inc
 *
 *  @rev 1.0
 */

/*==============================================================
 *! Revision History
 *! ============================
 *! 20-Dec-2008 x0052661@ti.com, initial version
 *================================================================*/

#ifndef _OMX_TI_INDEX_H_
#define _OMX_TI_INDEX_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/******************************************************************
 *   INCLUDE FILES
 ******************************************************************/
#include <OMX_Types.h>

/*******************************************************************
 * EXTERNAL REFERENCE NOTE: only use if not found in header file
 *******************************************************************/
/*----------         function prototypes      ------------------- */
/*----------         data declarations        ------------------- */
/*******************************************************************
 * PUBLIC DECLARATIONS: defined here, used elsewhere
 *******************************************************************/
/*----------         function prototypes      ------------------- */
/*----------         data declarations        ------------------- */

typedef enum OMX_TI_INDEXTYPE {

    OMX_IndexConfigAutoPauseAfterCapture = OMX_IndexAutoPauseAfterCapture,

    /* Vendor specific area for storing indices */

    /*Common Indices*/
    OMX_TI_IndexConfigChannelName = ((OMX_INDEXTYPE)OMX_IndexVendorStartUnused + 1), /**< reference: OMX_CONFIG_CHANNELNAME */

    OMX_TI_IndexParamJPEGUncompressedMode,              /**< 0x7F000002 reference: OMX_JPEG_PARAM_UNCOMPRESSEDMODETYPE */
    OMX_TI_IndexParamJPEGCompressedMode,                /**< 0x7F000003 reference: OMX_JPEG_PARAM_COMPRESSEDMODETYPE */
    OMX_TI_IndexParamDecodeSubregion,                   /**< 0x7F000004 reference: OMX_IMAGE_PARAM_DECODE_SUBREGION */

    /* H264 Encoder Indices*/
    OMX_TI_IndexParamVideoDataSyncMode,                 //!< 0x7F000005 Refer to OMX_VIDEO_PARAM_DATASYNCMODETYPE structure
    OMX_TI_IndexParamVideoNALUsettings,                 //!< 0x7F000006 use OMX_VIDEO_PARAM_AVCNALUCONTROLTYPE to configure the type os NALU to send along with the Different Frame Types
    OMX_TI_IndexParamVideoMEBlockSize,                  //!< 0x7F000007 use OMX_VIDEO_PARAM_MEBLOCKSIZETYPE to specify the minimum block size used for motion estimation
    OMX_TI_IndexParamVideoIntraPredictionSettings,      //!< 0x7F000008 use OMX_VIDEO_PARAM_INTRAPREDTYPE to configure the intra prediction modes used for different block sizes
    OMX_TI_IndexParamVideoEncoderPreset,                //!< 0x7F000009 use OMX_VIDEO_PARAM_ENCODER_PRESETTYPE to select the encoding mode & rate control preset
    OMX_TI_IndexParamVideoFrameDataContentSettings,     //!< 0x7F00000A use OMX_TI_VIDEO_PARAM_FRAMEDATACONTENTTYPE to configure the data content tpye
    OMX_TI_IndexParamVideoTransformBlockSize,           //!< 0x7F00000B use OMX_VIDEO_PARAM_TRANSFORM_BLOCKSIZETYPE to specify the block size used for ttransformation
    OMX_TI_IndexParamVideoVUIsettings,                  //!< 0x7F00000C use OMX_VIDEO_PARAM_VUIINFOTYPE
    OMX_TI_IndexParamVideoAdvancedFMO,                  //!< 0x7F00000D reference: TODO: */
    OMX_TI_IndexConfigVideoPixelInfo,                   //!< 0x7F00000E Use OMX_VIDEO_CONFIG_PIXELINFOTYPE structure to know the pixel aspectratio & pixel range
    OMX_TI_IndexConfigVideoMESearchRange,               //!< 0x7F00000F use OMX_VIDEO_CONFIG_MESEARCHRANGETYPE to specify the ME Search settings
    OMX_TI_IndexConfigVideoQPSettings,                  //!< 0x7F000010 use OMX_TI_VIDEO_CONFIG_QPSETTINGS to specify the ME Search settings
    OMX_TI_IndexConfigSliceSettings,                    //!< 0x7F000011 use OMX_VIDEO_CONFIG_SLICECODINGTYPE to specify the ME Search settings
    OMX_TI_IndexParamAVCInterlaceSettings,              //!< 0x7F000012 use OMX_TI_VIDEO_PARAM_AVCINTERLACECODING to specify the interlace settings for AVC encoder
    OMX_TI_IndexParamStereoInfo2004Settings,            //!< 0x7F000013 use OMX_TI_VIDEO_AVCENC_STEREOINFO2004 to specify the 2004 SEI for AVC Encoder
    OMX_TI_IndexParamStereoFramePacking2010Settings,    //!< 0x7F000014 use OMX_TI_VIDEO_AVCENC_FRAMEPACKINGINFO2010 to specify the 2010 SEI for AVC Encoder

    /* Camera Indices */
    OMX_TI_IndexConfigSensorSelect,                        /**< 0x7F000015 reference: OMX_CONFIG_SENSORSELECTTYPE */
    OMX_IndexConfigFlickerCancel,                       /**< 0x7F000016 reference: OMX_CONFIG_FLICKERCANCELTYPE */
    OMX_IndexConfigSensorCal,                           /**< 0x7F000017 reference: OMX_CONFIG_SENSORCALTYPE */
    OMX_IndexConfigISOSetting,                          /**< 0x7F000018 reference: OMX_CONFIG_ISOSETTINGTYPE */
    OMX_TI_IndexConfigSceneMode,                        /**< 0x7F000019 reference: OMX_CONFIG_SCENEMODETYPE */
    OMX_IndexConfigDigitalZoomSpeed,                    /**< 0x7F00001A reference: OMX_CONFIG_DIGITALZOOMSPEEDTYPE */
    OMX_IndexConfigDigitalZoomTarget,                   /**< 0x7F00001B reference: OMX_CONFIG_DIGITALZOOMTARGETTYPE */
    OMX_IndexConfigCommonScaleQuality,                  /**< 0x7F00001C reference: OMX_CONFIG_SCALEQUALITYTYPE */
    OMX_IndexConfigCommonDigitalZoomQuality,            /**< 0x7F00001D reference: OMX_CONFIG_SCALEQUALITYTYPE */
    OMX_IndexConfigOpticalZoomSpeed,                    /**< 0x7F00001E reference: OMX_CONFIG_DIGITALZOOMSPEEDTYPE */
    OMX_IndexConfigOpticalZoomTarget,                   /**< 0x7F00001F reference: OMX_CONFIG_DIGITALZOOMTARGETTYPE */
    OMX_IndexConfigSmoothZoom,                          /**< 0x7F000020 reference: OMX_CONFIG_SMOOTHZOOMTYPE */
    OMX_IndexConfigBlemish,                             /**< 0x7F000021 reference: OMX_CONFIG_BLEMISHTYPE */
    OMX_IndexConfigExtCaptureMode,                      /**< 0x7F000022 reference: OMX_CONFIG_EXTCAPTUREMODETYPE */
    OMX_IndexConfigExtPrepareCapturing,                 /**< 0x7F000023 reference: OMX_CONFIG_BOOLEANTYPE */
    OMX_IndexConfigExtCapturing,                        /**< 0x7F000024 reference: OMX_CONFIG_EXTCAPTURING */


    OMX_IndexCameraOperatingMode,                       /**< 0x7F000025 reference: OMX_CONFIG_CAMOPERATINGMODETYPE */

    OMX_IndexConfigDigitalFlash,                        /**< 0x7F000026 reference: OMX_CONFIG_BOOLEANTYPE */
    OMX_IndexConfigPrivacyIndicator,                    /**< 0x7F000027 reference: OMX_CONFIG_BOOLEANTYPE */
    OMX_IndexConfigTorchMode,                           /**< 0x7F000028 reference: OMX_CONFIG_TORCHMODETYPE */
    OMX_IndexConfigSlowSync,                            /**< 0x7F000029 reference: OMX_CONFIG_BOOLEANTYPE */
    OMX_IndexConfigExtFocusRegion,                      /**< 0x7F00002A reference: OMX_CONFIG_EXTFOCUSREGIONTYPE */
    OMX_IndexConfigFocusAssist,                         /**< 0x7F00002B reference: OMX_CONFIG_BOOLEANTYPE */
    OMX_IndexConfigImageFocusLock,                      /**< 0x7F00002C reference: OMX_IMAGE_CONFIG_LOCKTYPE */
    OMX_IndexConfigImageWhiteBalanceLock,               /**< 0x7F00002D reference: OMX_IMAGE_CONFIG_LOCKTYPE */
    OMX_IndexConfigImageExposureLock,                   /**< 0x7F00002E reference: OMX_IMAGE_CONFIG_LOCKTYPE */
    OMX_IndexConfigImageAllLock,                        /**< 0x7F00002F reference: OMX_IMAGE_CONFIG_LOCKTYPE */
    OMX_IndexConfigImageDeNoiseLevel,                   /**< 0x7F000030 reference: OMX_IMAGE_CONFIG_PROCESSINGLEVELTYPE */
    OMX_IndexConfigSharpeningLevel,                     /**< 0x7F000031 reference: OMX_IMAGE_CONFIG_PROCESSINGLEVELTYPE */
    OMX_IndexConfigDeBlurringLevel,                     /**< 0x7F000032 reference: OMX_IMAGE_CONFIG_PROCESSINGLEVELTYPE */
    OMX_IndexConfigChromaCorrection,                    /**< 0x7F000033 reference: OMX_IMAGE_CONFIG_PROCESSINGLEVELTYPE */
    OMX_IndexConfigDeMosaicingLevel,                    /**< 0x7F000034 reference: OMX_IMAGE_CONFIG_PROCESSINGLEVELTYPE */
    OMX_IndexConfigCommonWhiteBalanceGain,              /**< 0x7F000035 reference: OMX_CONFIG_WHITEBALGAINTYPE */
    OMX_IndexConfigCommonRGB2RGB,                       /**< 0x7F000036 reference: OMX_CONFIG_COLORCONVERSIONTYPE_II */
    OMX_IndexConfigCommonRGB2YUV,                       /**< 0x7F000037 reference: OMX_CONFIG_COLORCONVERSIONTYPE_II */
    OMX_IndexConfigCommonYUV2RGB,                       /**< 0x7F000038 reference: OMX_CONFIG_EXT_COLORCONVERSIONTYPE */
    OMX_IndexConfigCommonGammaTable,                    /**< 0x7F000039 reference: OMX_CONFIG_GAMMATABLETYPE */
    OMX_IndexConfigImageFaceDetection,                  /**< 0x7F00003A reference: OMX_CONFIG_OBJDETECTIONTYPE */
    OMX_IndexConfigImageBarcodeDetection,               /**< 0x7F00003B reference: OMX_CONFIG_OBJDETECTIONTYPE */
    OMX_IndexConfigImageSmileDetection,                 /**< 0x7F00003C reference: OMX_CONFIG_OBJDETECTIONTYPE */
    OMX_IndexConfigImageBlinkDetection,                 /**< 0x7F00003D reference: OMX_CONFIG_OBJDETECTIONTYPE */
    OMX_IndexConfigImageFrontObjectDetection,           /**< 0x7F00003E reference: OMX_CONFIG_OBJDETECTIONTYPE */
    OMX_IndexConfigHistogramMeasurement,                /**< 0x7F00003F reference: OMX_CONFIG_HISTOGRAMTYPE */
    OMX_IndexConfigDistanceMeasurement,                 /**< 0x7F000040 reference: OMX_CONFIG_DISTANCETYPE */
    OMX_IndexConfigSnapshotToPreview,                   /**< 0x7F000041 reference: OMX_CONFIG_BOOLEANTYPE */
    OMX_IndexConfigJpegHeaderType,                      /**< 0x7F000042 reference: OMX_CONFIG_JPEGHEEADERTYPE */
    OMX_IndexParamJpegMaxSize,                          /**< 0x7F000043 reference: OMX_IMAGE_JPEGMAXSIZE */
    OMX_IndexConfigRestartMarker,                       /**< 0x7F000044 reference: OMX_CONFIG_RSTMARKER */
    OMX_IndexParamImageStampOverlay,                    /**< 0x7F000045 reference: OMX_PARAM_IMAGESTAMPOVERLAYTYPE */
    OMX_IndexParamThumbnail,                            /**< 0x7F000046 reference: OMX_PARAM_THUMBNAILTYPE */
    OMX_IndexConfigImageStabilization,                  /**< 0x7F000047 reference: OMX_CONFIG_BOOLEANTYPE */
    OMX_IndexConfigMotionTriggeredImageStabilisation,   /**< 0x7F000048 reference: OMX_CONFIG_BOOLEANTYPE */
    OMX_IndexConfigRedEyeRemoval,                       /**< 0x7F000049 reference: OMX_CONFIG_REDEYEREMOVALTYPE */
    OMX_IndexParamHighISONoiseFiler,                    /**< 0x7F00004A reference: OMX_PARAM_ISONOISEFILTERTYPE */
    OMX_IndexParamLensDistortionCorrection,             /**< 0x7F00004B reference: OMX_CONFIG_BOOLEANTYPE */
    OMX_IndexParamLocalBrightnessAndContrast,           /**< 0x7F00004C reference: OMX_CONFIG_BOOLEANTYPE */
    OMX_IndexConfigChromaticAberrationCorrection,       /**< 0x7F00004D reference: OMX_CONFIG_BOOLEANTYPE */
    OMX_IndexParamVideoCaptureYUVRange,                 /**< 0x7F00004E reference: OMX_PARAM_VIDEOYUVRANGETYPE */
    OMX_IndexConfigFocusRegion,                         /**< 0x7F00004F reference: OMX_CONFIG_EXTFOCUSREGIONTYPE */
    OMX_IndexConfigImageMotionEstimation,               /**< 0x7F000050 reference: OMX_CONFIG_OBJDETECTIONTYPE */
    OMX_IndexParamProcessingOrder,                      /**< 0x7F000051 reference: OMX_CONFIGPROCESSINGORDERTYPE */
    OMX_IndexParamFrameStabilisation,                   /**< 0x7F000052 reference: OMX_CONFIG_BOOLEANTYPE */
    OMX_IndexParamVideoNoiseFilter,                     /**< 0x7F000053 reference: OMX_PARAM_VIDEONOISEFILTERTYPE */
    OMX_IndexConfigOtherExtraDataControl,               /**< 0x7F000054 reference: OMX_CONFIG_EXTRADATATYPE */
    OMX_TI_IndexParamBufferPreAnnouncement,             /**< 0x7F000055 reference: OMX_TI_PARAM_BUFFERPREANNOUNCE */
    OMX_TI_IndexConfigBufferRefCountNotification,       /**< 0x7F000056 reference: OMX_TI_CONFIG_BUFFERREFCOUNTNOTIFYTYPE */
    OMX_TI_IndexParam2DBufferAllocDimension,            /**< 0x7F000057 reference: OMX_TI_PARAM_2DBUFERALLOCDIMENSION */
    OMX_TI_IndexConfigWhiteBalanceManualColorTemp,         /**< 0x7F000058 reference: OMX_TI_CONFIG_WHITEBALANCECOLORTEMPTYPE */
    OMX_TI_IndexConfigFocusSpotWeighting,                  /**< 0x7F000059 reference: OMX_TI_CONFIG_FOCUSSPOTWEIGHTINGTYPE */
    OMX_TI_IndexParamSensorOverClockMode,                  /**< 0x7F00005A reference: OMX_CONFIG_BOOLEANTYPE */
    OMX_TI_IndexParamDccUriInfo,                           /**< 0x7F00005B reference: OMX_TI_PARAM_DCCURIINFO */
    OMX_TI_IndexParamDccUriBuffer,                         /**< 0x7F00005C reference: OMX_TI_CONFIG_SHAREDBUFFER */
    /* MPEG4 and H264 encoder specific Indices */
    OMX_TI_IndexParamVideoIntraRefresh,                 /**< 0x7F00005D reference: OMX_TI_VIDEO_PARAM_INTRAREFRESHTYPE */
    OMX_TI_IndexConfigShutterCallback,                  /**< 0x7F00005E reference: OMX_CONFIG_BOOLEANTYPE */
    OMX_TI_IndexParamVarFrameRate,                      /**< 0x7F00005F reference: OMX_PARAM_VARFARAMERATETYPE */
    OMX_TI_IndexConfigAutoConvergence,                  /**< 0x7F000060 reference: OMX_TI_CONFIG_CONVERGENCETYPE */
    OMX_TI_IndexConfigRightExposureValue,               /**< 0x7F000061 reference: OMX_TI_CONFIG_EXPOSUREVALUERIGHTTYPE */
    OMX_TI_IndexConfigExifTags,                         /**< 0x7F000062 reference: OMX_TI_CONFIG_SHAREDBUFFER */
    OMX_TI_IndexParamVideoPayloadHeaderFlag,            /**< 0x7F000063 reference: OMX_TI_PARAM_PAYLOADHEADERFLAG */
    OMX_TI_IndexParamVideoIvfMode,                      /**< 0x7F000064 reference: OMX_TI_PARAM_IVFFLAG */
    OMX_TI_IndexConfigCamCapabilities,                  /**< 0x7F000065 reference: OMX_TI_CONFIG_SHAREDBUFFER */
    OMX_TI_IndexConfigFacePriority3a,                   /**< 0x7F000066 reference: OMX_TI_CONFIG_3A_FACE_PRIORITY */
    OMX_TI_IndexConfigRegionPriority3a,                 /**< 0x7F000067 reference: OMX_TI_CONFIG_3A_REGION_PRIORITY */
    OMX_TI_IndexParamAutoConvergence,                   /**< 0x7F000068 reference: OMX_TI_PARAM_AUTOCONVERGENCETYPE */
    OMX_TI_IndexConfigAAAskipBuffer,                    /**< 0x7F000069 reference: OMX_TI_CONFIG_SHAREDBUFFER */
    OMX_TI_IndexParamStereoFrmLayout,                   /**< 0x7F00006A reference: OMX_TI_FRAMELAYOUTTYPE */
    OMX_TI_IndexConfigLocalBrightnessContrastEnhance,   /**< 0x7F00006B reference: OMX_TI_CONFIG_LOCAL_AND_GLOBAL_BRIGHTNESSCONTRASTTYPE */
    OMX_TI_IndexConfigGlobalBrightnessContrastEnhance,  /**< 0x7F00006C reference: OMX_TI_CONFIG_LOCAL_AND_GLOBAL_BRIGHTNESSCONTRASTTYPE */
    OMX_TI_IndexConfigVarFrmRange,                      /**< 0x7F00006D reference: OMX_TI_CONFIG_VARFRMRANGETYPE */

    /*H264 Encoder specific Indices*/
    OMX_TI_IndexParamAVCHRDBufferSizeSetting,   /**< reference: OMX_TI_VIDEO_PARAM_AVCHRDBUFFERSETTING */
    OMX_TI_IndexConfigAVCHRDBufferSizeSetting,   /**< reference: OMX_TI_VIDEO_CONFIG_AVCHRDBUFFERSETTING */
    OMX_TI_IndexConfigFocusDistance,              /**< reference: OMX_TI_CONFIG_FOCUSDISTANCETYPE */

#ifdef USE_MOTOROLA_CODE
    // Motorola specific - begin
    // Note! This section must be placed at the bottom of this enum.
    OMX_IndexConfigTargetExposure = ((OMX_INDEXTYPE)OMX_IndexVendorStartUnused + 0x2000),                       /**< reference: OMX_CONFIG_TARGETEXPOSURE */
    OMX_IndexConfigColorBars,                            /**< reference: OMX_CONFIG_BOOLEANTYPE */
    OMX_IndexConfigAFScore,                              /**< reference: OMX_CONFIG_AFScore */
    OMX_IndexConfigMipiCounters,                          /**< reference: OMX_CONFIG_MIPICOUNTERS */
	OMX_IndexConfigLedIntensity,						  /**< reference: OMX_CONFIG_LEDINTESITY */
    OMX_IndexConfigOTPEeprom,							 /**< reference: OMX_CONFIG_OTPEEPROM */
    // Motorola specific - end
#endif

} OMX_TI_INDEXTYPE;

/*******************************************************************
 * PRIVATE DECLARATIONS: defined here, used only here
 *******************************************************************/
/*----------          data declarations        ------------------- */
/*----------          function prototypes      ------------------- */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _OMX_TI_INDEX_H_ */

