package com.wanthings;

public class ZinniaCore {
    /* load our native library */
    static {
		System.loadLibrary("zinnia");
	}

	/* The native functions */
	public static native long characterNew();
	public static native void characterDestroy(long c);
	public static native void characterClear(long stroke);
	public static native int characterAdd(long character, long id, int x, int y);
	public static native void characterSetWidth(long character, long width);
	public static native void characterSetHeight(long character, long height);
	public static native long characterStrokesSize(long character);
	
	//recognizer
	public static native long recognizerNew();
	public static native void recognizerDestroy(long recognizer);
	public static native int recognizerOpen(long recognizer, String filename);
	public static native String recognizerStrerror(long recognizer);
	public static native long recognizerClassify(long recognizer, long character, long nbest);
	
	//result
	public static native String resultValue(long result, long index);
	public static native float resultScore(long result, long index);
	public static native long resultSize(long result);
	public static native void resultDestroy(long result);
}
