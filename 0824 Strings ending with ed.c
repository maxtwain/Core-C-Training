#include <stdio.h>
#include <string.h>

#define WORDCOUNT 500

int main(void) {

	char* word[WORDCOUNT] = { "worry", "throat", "plan", "tearful", "tramp", "distance", "pie", "kick", "jump", "stay", "attach", "substance", "ink", "notebook", "violent", "unequaled", "pleasant", "unsuitable", "decorate", "damp", "habitual", "shop", "foot", "battle", "waste", "treatment", "stone", "color", "brash", "report", "perform", "sophisticated", "crawl", "lethal", "hope", "grumpy", "label", "splendid", "back", "note", "rapid", "rake", "wary", "appliance", "devilish", "example", "pretend", "overt", "welcome", "present", "unknown", "cagey", "frog", "lame", "fall", "sneaky", "fragile", "grin", "brake", "lacking", "lock", "creature", "post", "ashamed", "quaint", "flight", "abaft", "spark", "detailed", "debt", "belong", "competition", "scrawny", "flesh", "silent", "bruise", "flood", "rob", "cattle", "error", "irritating", "naive", "unnatural", "calendar", "mere", "knot", "distribution", "stove", "tough", "lake", "spark", "boast", "bury", "reaction", "mix", "vague", "flimsy", "deeply", "morning", "reach", "tall", "burly", "cloistered", "tremendous", "suspect", "boat", "snail", "modern", "frightened", "pets", "prickly", "well-to-do", "humdrum", "hover", "laughable", "complete", "plug", "separate", "truculent", "baseball", "can", "boil", "classy", "carpenter", "cross", "square", "selection", "power", "fact", "aboard", "rescue", "sweater", "plant", "empty", "wakeful", "mature", "swing", "protect", "aware", "polite", "rotten", "son", "fear", "wine", "billowy", "fade", "grate", "sign", "woman", "quack", "grip", "attack", "town", "crook", "wobble", "allow", "compare", "pick", "grotesque", "chemical", "difficult", "violet", "work", "hungry", "windy", "soft", "fasten", "protest", "afterthought", "learn", "blue", "order", "graceful", "appreciate", "reflect", "arch", "instinctive", "surprise", "notice", "screw", "blink", "wander", "thread", "pushy", "giants", "addicted", "insurance", "boiling", "cheat", "versed", "increase", "crime", "muddle", "fork", "trade", "parched", "picture", "muddled", "brawny", "circle", "magenta", "outstanding", "box", "horse", "seemly", "squeeze", "trucks", "room", "top", "file", "mindless", "combative", "mice", "plain", "hang", "button", "lamentable", "shelter", "tease", "temper", "soothe", "fixed", "makeshift", "history", "challenge", "testy", "tray", "offend", "chalk", "lazy", "deafening", "unpack", "sound", "abundant", "rhyme", "deceive", "roll", "sticky", "oranges", "store", "bathe", "condition", "field", "far-flung", "spiders", "evanescent", "rabid", "mend", "hop", "dress", "stir", "volleyball", "explode", "well-groomed", "bounce", "last", "flat", "exuberant", "snobbish", "balance", "obsolete", "flame", "purpose", "religion", "quilt", "purple", "trashy", "groovy", "cars", "direful", "stretch", "gaudy", "class", "greet", "hole", "upbeat", "expert", "fierce", "scarecrow", "thought", "exercise", "ghost", "visitor", "real", "nosy", "wait", "divide", "hall", "note", "handle", "cool", "general", "drunk", "macabre", "rub", "range", "passenger", "club", "undesirable", "underwear", "insect", "infamous", "tie", "elated", "squeal", "inform", "force", "sour", "therapeutic", "beneficial", "wicked", "curtain", "unable", "economic", "parsimonious", "abandoned", "meaty", "absurd", "gray", "eye", "elastic", "trouble", "soda", "camera", "curve", "embarrassed", "nebulous", "typical", "useful", "absent", "unaccountable", "magnificent", "argument", "hapless", "whole", "decisive", "trip", "hallowed", "twist", "jam", "terrific", "trousers", "pies", "consider", "abashed", "judge", "dapper", "square", "eager", "house", "physical", "possess", "limping", "thing", "whisper", "naughty", "geese", "bee", "produce", "functional", "transport", "raise", "suffer", "continue", "moor", "conscious", "guiltless", "enchanting", "zinc", "signal", "zebra", "sable", "synonymous", "fish", "iron", "invent", "helpful", "dirt", "arm", "old-fashioned", "pastoral", "superb", "friendly", "ten", "scribble", "business", "cumbersome", "doubt", "program", "reply", "piquant", "faint", "connection", "grieving", "purring", "talented", "food", "rely", "wrist", "cover", "attend", "start", "attractive", "five", "certain", "languid", "uttermost", "perpetual", "ice", "barbarous", "governor", "inconclusive", "look", "deserve", "crib", "slow", "fool", "productive", "brother", "chilly", "store", "doubtful", "nerve", "charge", "bear", "analyse", "home", "calculator", "grade", "tin", "sister", "surprise", "spot", "bikes", "resonant", "smoke", "twig", "befitting", "same", "humor", "company", "time", "actually", "exciting", "tense", "train", "flowers", "icy", "glistening", "juggle", "gamy", "kaput", "taboo", "government", "object", "crown", "silk", "scent", "malicious", "suggestion", "chief", "interrupt", "obscene", "wealthy", "squeamish", "stare", "baby", "fretful", "teeth", "rigid", "glib", "picayune", "tacit", "knowledgeable", "mourn", "hot", "pest", "abrasive", "high-pitched", "used", "offer", "illustrious", "spot", "finger", "paltry", "apparatus", "breath", "motion", "guard", "toe", "gullible", "extend", "wreck", "talk", "bustling", "monkey", "tour", "aloof", "intelligent", "tiresome" };

	for (int i0 = 0; i0 < WORDCOUNT; ++i0) {
		int wordSize = strlen(word[i0]);
		char* ending = &word[i0][wordSize - 2];
		if (strcmp(ending, "ed") == 0) {
			printf("%s\n", word[i0]);
		}
	}
	puts("\n");
}
