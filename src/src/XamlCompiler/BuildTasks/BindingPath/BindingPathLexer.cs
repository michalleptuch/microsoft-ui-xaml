//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//     ANTLR Version: 4.5.1
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from BindingPath.g4 by ANTLR 4.5.1

// Unreachable code detected
#pragma warning disable 0162
// The variable '...' is assigned but its value is never used
#pragma warning disable 0219
// Missing XML comment for publicly visible type or member '...'
#pragma warning disable 1591

using System;
using Antlr4.Runtime;
using Antlr4.Runtime.Atn;
using Antlr4.Runtime.Misc;
using DFA = Antlr4.Runtime.Dfa.DFA;

[System.CodeDom.Compiler.GeneratedCode("ANTLR", "4.5.1")]
[System.CLSCompliant(false)]
public partial class BindingPathLexer : Lexer {
	public const int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, WS=9, 
		ESCAPEDQUOTE=10, QUOTE=11, DOUBLE_QUOTE=12, TRUE=13, FALSE=14, NULL=15, 
		Digits=16, QuotedString=17, IDENTIFIER=18;
	public static string[] modeNames = {
		"DEFAULT_MODE"
	};

	public static readonly string[] ruleNames = {
		"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "WS", 
		"ESCAPEDQUOTE", "QUOTE", "DOUBLE_QUOTE", "TRUE", "FALSE", "NULL", "Digits", 
		"QuotedString", "IDENTIFIER", "Available_identifier", "Identifier_or_keyword", 
		"Identifier_start_character", "Identifier_part_character", "Letter_character", 
		"Combining_character", "Decimal_digit_character", "Connecting_character", 
		"Formatting_character", "UNICODE_CLASS_LU", "UNICODE_CLASS_LL", "UNICODE_CLASS_LT", 
		"UNICODE_CLASS_LM", "UNICODE_CLASS_LO", "UNICODE_CLASS_NL", "UNICODE_CLASS_MN", 
		"UNICODE_CLASS_MC", "UNICODE_CLASS_CF", "UNICODE_CLASS_PC", "UNICODE_CLASS_ND"
	};


	public BindingPathLexer(ICharStream input)
		: base(input)
	{
		Interpreter = new LexerATNSimulator(this,_ATN);
	}

	private static readonly string[] _LiteralNames = {
		null, "'-'", "'.'", "':'", "'('", "')'", "','", "'['", "']'", null, null, 
		"'''", "'\"'", "'x:True'", "'x:False'", "'x:Null'"
	};
	private static readonly string[] _SymbolicNames = {
		null, null, null, null, null, null, null, null, null, "WS", "ESCAPEDQUOTE", 
		"QUOTE", "DOUBLE_QUOTE", "TRUE", "FALSE", "NULL", "Digits", "QuotedString", 
		"IDENTIFIER"
	};
	public static readonly IVocabulary DefaultVocabulary = new Vocabulary(_LiteralNames, _SymbolicNames);

	[NotNull]
	public override IVocabulary Vocabulary
	{
		get
		{
			return DefaultVocabulary;
		}
	}

	public override string GrammarFileName { get { return "BindingPath.g4"; } }

	public override string[] RuleNames { get { return ruleNames; } }

	public override string[] ModeNames { get { return modeNames; } }

	public override string SerializedAtn { get { return _serializedATN; } }

	public static readonly string _serializedATN =
		"\x3\x430\xD6D1\x8206\xAD2D\x4417\xAEF1\x8D80\xAADD\x2\x14\xDF\b\x1\x4"+
		"\x2\t\x2\x4\x3\t\x3\x4\x4\t\x4\x4\x5\t\x5\x4\x6\t\x6\x4\a\t\a\x4\b\t\b"+
		"\x4\t\t\t\x4\n\t\n\x4\v\t\v\x4\f\t\f\x4\r\t\r\x4\xE\t\xE\x4\xF\t\xF\x4"+
		"\x10\t\x10\x4\x11\t\x11\x4\x12\t\x12\x4\x13\t\x13\x4\x14\t\x14\x4\x15"+
		"\t\x15\x4\x16\t\x16\x4\x17\t\x17\x4\x18\t\x18\x4\x19\t\x19\x4\x1A\t\x1A"+
		"\x4\x1B\t\x1B\x4\x1C\t\x1C\x4\x1D\t\x1D\x4\x1E\t\x1E\x4\x1F\t\x1F\x4 "+
		"\t \x4!\t!\x4\"\t\"\x4#\t#\x4$\t$\x4%\t%\x4&\t&\x4\'\t\'\x3\x2\x3\x2\x3"+
		"\x3\x3\x3\x3\x4\x3\x4\x3\x5\x3\x5\x3\x6\x3\x6\x3\a\x3\a\x3\b\x3\b\x3\t"+
		"\x3\t\x3\n\x6\n\x61\n\n\r\n\xE\n\x62\x3\n\x3\n\x3\v\x3\v\x3\v\x3\v\x5"+
		"\vk\n\v\x3\f\x3\f\x3\r\x3\r\x3\xE\x3\xE\x3\xE\x3\xE\x3\xE\x3\xE\x3\xE"+
		"\x3\xF\x3\xF\x3\xF\x3\xF\x3\xF\x3\xF\x3\xF\x3\xF\x3\x10\x3\x10\x3\x10"+
		"\x3\x10\x3\x10\x3\x10\x3\x10\x3\x11\x6\x11\x88\n\x11\r\x11\xE\x11\x89"+
		"\x3\x12\x3\x12\x3\x12\a\x12\x8F\n\x12\f\x12\xE\x12\x92\v\x12\x3\x12\x3"+
		"\x12\x3\x12\x3\x12\x3\x12\a\x12\x99\n\x12\f\x12\xE\x12\x9C\v\x12\x3\x12"+
		"\x3\x12\x5\x12\xA0\n\x12\x3\x13\x3\x13\x3\x14\x3\x14\x3\x15\x3\x15\a\x15"+
		"\xA8\n\x15\f\x15\xE\x15\xAB\v\x15\x3\x16\x3\x16\x5\x16\xAF\n\x16\x3\x17"+
		"\x3\x17\x3\x17\x3\x17\x3\x17\x5\x17\xB6\n\x17\x3\x18\x3\x18\x3\x18\x3"+
		"\x18\x3\x18\x3\x18\x5\x18\xBE\n\x18\x3\x19\x3\x19\x5\x19\xC2\n\x19\x3"+
		"\x1A\x3\x1A\x3\x1B\x3\x1B\x3\x1C\x3\x1C\x3\x1D\x3\x1D\x3\x1E\x3\x1E\x3"+
		"\x1F\x3\x1F\x3 \x3 \x3!\x3!\x3\"\x3\"\x3#\x3#\x3$\x3$\x3%\x3%\x3&\x3&"+
		"\x3\'\x3\'\x4\x90\x9A\x2(\x3\x3\x5\x4\a\x5\t\x6\v\a\r\b\xF\t\x11\n\x13"+
		"\v\x15\f\x17\r\x19\xE\x1B\xF\x1D\x10\x1F\x11!\x12#\x13%\x14\'\x2)\x2+"+
		"\x2-\x2/\x2\x31\x2\x33\x2\x35\x2\x37\x2\x39\x2;\x2=\x2?\x2\x41\x2\x43"+
		"\x2\x45\x2G\x2I\x2K\x2M\x2\x3\x2\n\x4\x2\v\v\"\"\x4\x2\x43\\\xC2\xE0\x6"+
		"\x2\x1C7\x1C7\x1CA\x1CA\x1CD\x1CD\x1F4\x1F4\x5\x2\x1BD\x1BD\x1C2\x1C5"+
		"\x296\x296\x4\x2\x16F0\x16F2\x2162\x2171\x5\x2\x905\x905\x940\x942\x94B"+
		"\x94E\x5\x2\xAF\xAF\x602\x605\x6DF\x6DF\b\x2\x61\x61\x2041\x2042\x2056"+
		"\x2056\xFE35\xFE36\xFE4F\xFE51\xFF41\xFF41\xDE\x2\x3\x3\x2\x2\x2\x2\x5"+
		"\x3\x2\x2\x2\x2\a\x3\x2\x2\x2\x2\t\x3\x2\x2\x2\x2\v\x3\x2\x2\x2\x2\r\x3"+
		"\x2\x2\x2\x2\xF\x3\x2\x2\x2\x2\x11\x3\x2\x2\x2\x2\x13\x3\x2\x2\x2\x2\x15"+
		"\x3\x2\x2\x2\x2\x17\x3\x2\x2\x2\x2\x19\x3\x2\x2\x2\x2\x1B\x3\x2\x2\x2"+
		"\x2\x1D\x3\x2\x2\x2\x2\x1F\x3\x2\x2\x2\x2!\x3\x2\x2\x2\x2#\x3\x2\x2\x2"+
		"\x2%\x3\x2\x2\x2\x3O\x3\x2\x2\x2\x5Q\x3\x2\x2\x2\aS\x3\x2\x2\x2\tU\x3"+
		"\x2\x2\x2\vW\x3\x2\x2\x2\rY\x3\x2\x2\x2\xF[\x3\x2\x2\x2\x11]\x3\x2\x2"+
		"\x2\x13`\x3\x2\x2\x2\x15j\x3\x2\x2\x2\x17l\x3\x2\x2\x2\x19n\x3\x2\x2\x2"+
		"\x1Bp\x3\x2\x2\x2\x1Dw\x3\x2\x2\x2\x1F\x7F\x3\x2\x2\x2!\x87\x3\x2\x2\x2"+
		"#\x9F\x3\x2\x2\x2%\xA1\x3\x2\x2\x2\'\xA3\x3\x2\x2\x2)\xA5\x3\x2\x2\x2"+
		"+\xAE\x3\x2\x2\x2-\xB5\x3\x2\x2\x2/\xBD\x3\x2\x2\x2\x31\xC1\x3\x2\x2\x2"+
		"\x33\xC3\x3\x2\x2\x2\x35\xC5\x3\x2\x2\x2\x37\xC7\x3\x2\x2\x2\x39\xC9\x3"+
		"\x2\x2\x2;\xCB\x3\x2\x2\x2=\xCD\x3\x2\x2\x2?\xCF\x3\x2\x2\x2\x41\xD1\x3"+
		"\x2\x2\x2\x43\xD3\x3\x2\x2\x2\x45\xD5\x3\x2\x2\x2G\xD7\x3\x2\x2\x2I\xD9"+
		"\x3\x2\x2\x2K\xDB\x3\x2\x2\x2M\xDD\x3\x2\x2\x2OP\a/\x2\x2P\x4\x3\x2\x2"+
		"\x2QR\a\x30\x2\x2R\x6\x3\x2\x2\x2ST\a<\x2\x2T\b\x3\x2\x2\x2UV\a*\x2\x2"+
		"V\n\x3\x2\x2\x2WX\a+\x2\x2X\f\x3\x2\x2\x2YZ\a.\x2\x2Z\xE\x3\x2\x2\x2["+
		"\\\a]\x2\x2\\\x10\x3\x2\x2\x2]^\a_\x2\x2^\x12\x3\x2\x2\x2_\x61\t\x2\x2"+
		"\x2`_\x3\x2\x2\x2\x61\x62\x3\x2\x2\x2\x62`\x3\x2\x2\x2\x62\x63\x3\x2\x2"+
		"\x2\x63\x64\x3\x2\x2\x2\x64\x65\b\n\x2\x2\x65\x14\x3\x2\x2\x2\x66g\a`"+
		"\x2\x2gk\a$\x2\x2hi\a`\x2\x2ik\a)\x2\x2j\x66\x3\x2\x2\x2jh\x3\x2\x2\x2"+
		"k\x16\x3\x2\x2\x2lm\a)\x2\x2m\x18\x3\x2\x2\x2no\a$\x2\x2o\x1A\x3\x2\x2"+
		"\x2pq\az\x2\x2qr\a<\x2\x2rs\aV\x2\x2st\at\x2\x2tu\aw\x2\x2uv\ag\x2\x2"+
		"v\x1C\x3\x2\x2\x2wx\az\x2\x2xy\a<\x2\x2yz\aH\x2\x2z{\a\x63\x2\x2{|\an"+
		"\x2\x2|}\au\x2\x2}~\ag\x2\x2~\x1E\x3\x2\x2\x2\x7F\x80\az\x2\x2\x80\x81"+
		"\a<\x2\x2\x81\x82\aP\x2\x2\x82\x83\aw\x2\x2\x83\x84\an\x2\x2\x84\x85\a"+
		"n\x2\x2\x85 \x3\x2\x2\x2\x86\x88\x5\x33\x1A\x2\x87\x86\x3\x2\x2\x2\x88"+
		"\x89\x3\x2\x2\x2\x89\x87\x3\x2\x2\x2\x89\x8A\x3\x2\x2\x2\x8A\"\x3\x2\x2"+
		"\x2\x8B\x90\x5\x17\f\x2\x8C\x8F\x5\x15\v\x2\x8D\x8F\v\x2\x2\x2\x8E\x8C"+
		"\x3\x2\x2\x2\x8E\x8D\x3\x2\x2\x2\x8F\x92\x3\x2\x2\x2\x90\x91\x3\x2\x2"+
		"\x2\x90\x8E\x3\x2\x2\x2\x91\x93\x3\x2\x2\x2\x92\x90\x3\x2\x2\x2\x93\x94"+
		"\x5\x17\f\x2\x94\xA0\x3\x2\x2\x2\x95\x9A\x5\x19\r\x2\x96\x99\x5\x15\v"+
		"\x2\x97\x99\v\x2\x2\x2\x98\x96\x3\x2\x2\x2\x98\x97\x3\x2\x2\x2\x99\x9C"+
		"\x3\x2\x2\x2\x9A\x9B\x3\x2\x2\x2\x9A\x98\x3\x2\x2\x2\x9B\x9D\x3\x2\x2"+
		"\x2\x9C\x9A\x3\x2\x2\x2\x9D\x9E\x5\x19\r\x2\x9E\xA0\x3\x2\x2\x2\x9F\x8B"+
		"\x3\x2\x2\x2\x9F\x95\x3\x2\x2\x2\xA0$\x3\x2\x2\x2\xA1\xA2\x5\'\x14\x2"+
		"\xA2&\x3\x2\x2\x2\xA3\xA4\x5)\x15\x2\xA4(\x3\x2\x2\x2\xA5\xA9\x5+\x16"+
		"\x2\xA6\xA8\x5-\x17\x2\xA7\xA6\x3\x2\x2\x2\xA8\xAB\x3\x2\x2\x2\xA9\xA7"+
		"\x3\x2\x2\x2\xA9\xAA\x3\x2\x2\x2\xAA*\x3\x2\x2\x2\xAB\xA9\x3\x2\x2\x2"+
		"\xAC\xAF\x5/\x18\x2\xAD\xAF\a\x61\x2\x2\xAE\xAC\x3\x2\x2\x2\xAE\xAD\x3"+
		"\x2\x2\x2\xAF,\x3\x2\x2\x2\xB0\xB6\x5/\x18\x2\xB1\xB6\x5\x33\x1A\x2\xB2"+
		"\xB6\x5\x35\x1B\x2\xB3\xB6\x5\x31\x19\x2\xB4\xB6\x5\x37\x1C\x2\xB5\xB0"+
		"\x3\x2\x2\x2\xB5\xB1\x3\x2\x2\x2\xB5\xB2\x3\x2\x2\x2\xB5\xB3\x3\x2\x2"+
		"\x2\xB5\xB4\x3\x2\x2\x2\xB6.\x3\x2\x2\x2\xB7\xBE\x5\x39\x1D\x2\xB8\xBE"+
		"\x5;\x1E\x2\xB9\xBE\x5=\x1F\x2\xBA\xBE\x5? \x2\xBB\xBE\x5\x41!\x2\xBC"+
		"\xBE\x5\x43\"\x2\xBD\xB7\x3\x2\x2\x2\xBD\xB8\x3\x2\x2\x2\xBD\xB9\x3\x2"+
		"\x2\x2\xBD\xBA\x3\x2\x2\x2\xBD\xBB\x3\x2\x2\x2\xBD\xBC\x3\x2\x2\x2\xBE"+
		"\x30\x3\x2\x2\x2\xBF\xC2\x5\x45#\x2\xC0\xC2\x5G$\x2\xC1\xBF\x3\x2\x2\x2"+
		"\xC1\xC0\x3\x2\x2\x2\xC2\x32\x3\x2\x2\x2\xC3\xC4\x5M\'\x2\xC4\x34\x3\x2"+
		"\x2\x2\xC5\xC6\x5K&\x2\xC6\x36\x3\x2\x2\x2\xC7\xC8\x5I%\x2\xC8\x38\x3"+
		"\x2\x2\x2\xC9\xCA\t\x3\x2\x2\xCA:\x3\x2\x2\x2\xCB\xCC\x4\x63|\x2\xCC<"+
		"\x3\x2\x2\x2\xCD\xCE\t\x4\x2\x2\xCE>\x3\x2\x2\x2\xCF\xD0\x4\x2B2\x2F0"+
		"\x2\xD0@\x3\x2\x2\x2\xD1\xD2\t\x5\x2\x2\xD2\x42\x3\x2\x2\x2\xD3\xD4\t"+
		"\x6\x2\x2\xD4\x44\x3\x2\x2\x2\xD5\xD6\x4\x302\x312\x2\xD6\x46\x3\x2\x2"+
		"\x2\xD7\xD8\t\a\x2\x2\xD8H\x3\x2\x2\x2\xD9\xDA\t\b\x2\x2\xDAJ\x3\x2\x2"+
		"\x2\xDB\xDC\t\t\x2\x2\xDCL\x3\x2\x2\x2\xDD\xDE\x4\x32;\x2\xDEN\x3\x2\x2"+
		"\x2\x10\x2\x62j\x89\x8E\x90\x98\x9A\x9F\xA9\xAE\xB5\xBD\xC1\x3\b\x2\x2";
	public static readonly ATN _ATN =
		new ATNDeserializer().Deserialize(_serializedATN.ToCharArray());
}