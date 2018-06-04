package com.example.security;


public class Security {
    static {
        System.loadLibrary("security");
    }

    public static native String getSecret();

    public static native void antiDebug();
}
