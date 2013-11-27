package com.wanthings.zinniademo;

import android.os.Bundle;
import android.app.Activity;
import android.view.Menu;
import android.util.Log;

import com.wanthings.ZinniaCore;

public class MainActivity extends Activity {

    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.main);

		long recognizer = 0;
		long character = 0;
		long result = 0;
		int modelState = 0;

        if (character == 0) {
            character = ZinniaCore.characterNew();
            ZinniaCore.characterClear(character);
            ZinniaCore.characterSetWidth(character, 300);
            ZinniaCore.characterSetHeight(character, 300);
        }
        if (recognizer == 0) {
            recognizer = ZinniaCore.recognizerNew();
        }
        modelState = ZinniaCore.recognizerOpen(recognizer, "/sdcard/Download/handwriting-zh_CN.model");
        if (modelState != 1) {
            Log.d(getClass().getName(), "model文件打开失败");
            return;
        }
        result = ZinniaCore.recognizerClassify(recognizer, character, 10);
        if (result != 0) {
            for (int i = 0; i < ZinniaCore.resultSize(result); i++) {
                Log.d(getClass().getName(), ZinniaCore.resultValue(result, i) + " : " + ZinniaCore.resultScore(result, i));
            }	
        }
        //resultDestroy(result);
        //characterDestroy(character);
        //recognizerDestroy(recognizer);
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        return true;
    }
}
