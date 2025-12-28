package com.example.opencvtest;

import android.app.Activity;
import android.os.Bundle;

public class MainActivity extends Activity 
{

	@Override
	protected void onCreate(Bundle savedInstanceState)
	{
		super.onCreate(savedInstanceState);
		NativeLibrary.testOpenCV();
	}
}