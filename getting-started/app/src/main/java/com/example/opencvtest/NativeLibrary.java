package com.example.opencvtest;

public class NativeLibrary
{
	static
	{
		System.loadLibrary("native-lib");
	}
	public static native void testOpenCV();
}