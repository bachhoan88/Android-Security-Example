package com.example.security;

import org.apache.commons.codec.DecoderException;
import org.apache.commons.codec.binary.Hex;

public class APIKey {
    static {
        System.loadLibrary("security");
    }

    private static native String userName();

    private static native String userPw();

    public static String getUserName() throws Exception {
        return new String(Hex.decodeHex(userName().toCharArray()), "UTF-8");
    }

    public static String getUserPw() throws Exception {
        return new String(Hex.decodeHex(userPw().toCharArray()), "UTF-8");
    }
}
